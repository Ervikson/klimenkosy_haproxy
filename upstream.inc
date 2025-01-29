upstream example_app {

	server 127.0.0.1:8881 weight=2;
    server 127.0.0.1:8882 weight=3;
    server 127.0.0.1:8883 weight=4;
}