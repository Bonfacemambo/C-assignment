#include <iostream>
#include <string>

using namespace std;

class Computer {
    public:
        Computer(string ip_address) : ip_address(ip_address) {}

        void connect() {
            cout << "Connection to computer has been made." << endl;
        }

    private:
        string ip_address;
};

class Client : public Computer {
    public:
        Client(string ip_address, int port) : Computer(ip_address), port(port) {}

        void connect() {
            cout << "Connection to client is complete." << endl;
        }

    private:
        int port;
};

class Server : public Computer {
    public:
        Server(string ip_address, string domain) : Computer(ip_address), domain(domain) {}

        void connect() {
            cout << "Connection to server successful." << endl;
        }

    private:
        string domain;
};

int main() {
    Client client_X("192.168.0.1", 8080);
    Server server_X("192.168.0.2", "my domain.com");

    client_X.connect();
    server_X.connect();

    return 0;
}
