#include <iostream>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <sys/uio.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <fcntl.h>
using namespace std;

//Server Side

int main(int argc, char *argv[])
{

    //for the server, we only need to specify a port number
    if(argc != 2)
    {       You, 3 days ago * uncommited changes
        cerr << "Usage: port" << endl;
        exit(0)

    }
    //grab the port number
    int port = atoi(argv[1]);
    //buffer to send and receive messages with
    char msg[1500];

    //setup a socket and connection tools
    sockaddr_in servAddr;
    bzero((char*)&servAddr, sizeof(servAddr));
    servAddr.sin_family = AF_INET;
    servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servAddr.sin_port = htons(port);


    //open stream orientedsocket with internet address
    //also keep track of the socket descriptor
    int serverSd = socket(AF_INET, SOCK_STREAM, 0);
    if(serverSd < 0)
    {
        cerr << "Error establishing the server socket" << endl;
        exit(0)
    }

}