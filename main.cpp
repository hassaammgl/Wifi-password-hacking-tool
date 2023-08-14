#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <cstdio>
#include <conio.h>
#include <sstream>
using namespace std;

int main()
{
    cout << "Checking availabe wlan connections..." << endl;
    system("netsh wlan show profile");
    Sleep(3000);
    cout << "Enter the exact name of the profile name you want to get password " << endl;
    string commandLine;
    string commandLine1 = "netsh wlan show profile name=\"";
    string commandLine2 = "\" key=clear";
    string wifiName;

    getline(cin, wifiName);

    commandLine1.append(wifiName);
    commandLine1.append(commandLine2);
    commandLine.append(commandLine1);
    stringstream ss(commandLine);
    string command = ss.str();

    const char *command_c_str = command.c_str();

    cout << "In Secrity Settings --> the key content is the wifi password..." << endl;
    system(command_c_str);
    system("pause");
    return 0;
}
