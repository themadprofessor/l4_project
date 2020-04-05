async fn cargo_server() {
    let preconnection = Preconnection::new(
        TransportProperties::default(),
        HttpServer::<Cargo, ()>::default(),
    ).local_endpoint(SocketAddr::from_str("127.0.0.1:8081").unwrap());

    let cargo = tokio::task::spawn_blocking(
            move || Cargo::from_path("Cargo.toml").unwrap())
        .await
        .expect("failed to join file loading task");

    let mut listener = preconnection.listen().await.unwrap();
    while let Some(conn) = listener.next().await {
        let mut conn = conn.unwrap();
        let request = conn.receive().await.unwrap();

        if request.method() == Method.GET && request.url().path() == "Cargo.toml" {
            conn.send(Response::builder().body(cargo.clone()).unwrap())
                .await
                .unwrap();
        }
    }
}
