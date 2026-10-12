#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ip;

    cout << "Enter IP Address: ";
    cin >> ip;


    string first = ip.substr(0, ip.find('.'));
    int firstOctet = stoi(first);

    cout << "\nIP Address: " << ip << endl;

    if (firstOctet == 127)
    {
        cout << "\nLoopback Address Detected\n";
        cout << "Definition      : A loopback address allows a computer to communicate with itself.\n";
        cout << "Range           : 127.0.0.0 - 127.255.255.255\n";
        cout << "Example         : 127.0.0.1 (localhost)\n";
        return 0;
    }

    if (firstOctet >= 0 && firstOctet <= 126)
    {
        cout << "Class           : A\n";
        cout << "First Octet     : 0 - 126\n";
        cout << "Binary Pattern  : 0XXXXXXX\n";
        cout << "IP Range        : 0.0.0.0 - 126.255.255.255\n";
        cout << "Subnet          : The first 8 bits represent the Network ID.\n";
        cout << "Subnet Mask     : 255.0.0.0\n";
        cout << "Definition      : A subnet mask separates the Network ID and Host ID.\n";
        cout << "Hosts/Network   : 2^24 - 2\n";
        cout << "No. of Networks : 2^7\n";
    }
    else if (firstOctet >= 128 && firstOctet <= 191)
    {
        cout << "Class           : B\n";
        cout << "First Octet     : 128 - 191\n";
        cout << "Binary Pattern  : 10XXXXXX\n";
        cout << "IP Range        : 128.0.0.0 - 191.255.255.255\n";
        cout << "Subnet          : The first 16 bits represent the Network ID.\n";
        cout << "Subnet Mask     : 255.255.0.0\n";
        cout << "Definition      : A subnet mask separates the Network ID and Host ID.\n";
        cout << "Hosts/Network   : 2^16 - 2 \n";
        cout << "No. of Networks : 2^14\n";
    }
    else if (firstOctet >= 192 && firstOctet <= 223)
    {
        cout << "Class           : C\n";
        cout << "First Octet     : 192 - 223\n";
        cout << "Binary Pattern  : 110XXXXX\n";
        cout << "IP Range        : 192.0.0.0 - 223.255.255.255\n";
        cout << "Subnet          : The first 24 bits represent the Network ID.\n";
        cout << "Subnet Mask     : 255.255.255.0\n";
        cout << "Definition      : A subnet mask separates the Network ID and Host ID.\n";
        cout << "Hosts/Network   : 2^8 - 2\n";
        cout << "No. of Networks : 2^21 \n";
    }
    else if (firstOctet >= 224 && firstOctet <= 239)
    {
        cout << "Class           : D\n";
        cout << "First Octet     : 224 - 239\n";
        cout << "Binary Pattern  : 1110XXXX\n";
        cout << "IP Range        : 224.0.0.0 - 239.255.255.255\n";
        cout << "Definition      : Used for Multicasting.\n";
        cout << "Subnet Mask     : Not Applicable\n";
        cout << "Hosts/Network   : Multicast\n";
        cout << "No. of Networks : Not Applicable\n";
    }
    else if (firstOctet >= 240 && firstOctet <= 255)
    {
        cout << "Class           : E\n";
        cout << "First Octet     : 240 - 255\n";
        cout << "Binary Pattern  : 1111XXXX\n";
        cout << "IP Range        : 240.0.0.0 - 255.255.255.255\n";
        cout << "Definition      : Reserved for Experimental purposes.\n";
        cout << "Subnet Mask     : Not Applicable\n";
        cout << "Hosts/Network   : Experimental\n";
        cout << "No. of Networks : Not Applicable\n";
    }
    else
    {
        cout << "Invalid IP Address!\n";
    }

    return 0;
}