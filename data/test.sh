address="example.com google.com facebook.com reddit.com github.com wikipedia.com moodle.gla.ac.uk fcc.gov mariadb.com protondb.com docs.rs tokio.rs learnxinyminutes.com nk.pl onet.pl zus.pl"

for cmd in "./sockets" "./taps_example"; do
	for addr in $address; do
		# ensure value in dns cache if applicable
		for i in {0..10}; do
			dig $addr > /dev/null
		done
		echo "Trying $addr"
		for i in {0..10}; do
			ts=$(date +%s%N)
			res=$($cmd $addr)
			tt=$((($(date +%s%N) - $ts)/1000000))
			echo "$addr,$(echo $res | awk '{print $3}'),$tt ms" | tee -a "${cmd:2}.csv"
		done
		echo
	done
	echo "-------------------------------------------------"
done
