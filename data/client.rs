async fn cargo_client() {
    let preconnection = Preconnection::new(
        TransportProperties::default(),
        HttpClient::<(), Cargo> ::default(),
    ).remote_endpoint(SocketAddr::from_str("127.0.0.1:8081").unwrap());

    let mut connection = preconnection.initiate().await.unwrap();
    let request = Request::builder()
        .uri("http://127.0.0.1:8081/Cargo.toml")
        .header(HOST, "127.0.0.1")
        .body(())
        .unwrap();

    connection.send(request).await.unwrap();

    let response = connection.receive().await.unwrap();
    println!("{}", response.body().package().unwrap().name)
}