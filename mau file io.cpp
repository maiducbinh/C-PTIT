#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream outClientFile("clients.dat", ios::out );
    if(!outClientFile)
    {
        cerr << "File could not be opened" << endl;
        exit( 1 );
    }
    cout << "Enter the account, name, and balance." << endl;
    cout << "Enter end-of-file to end input.\n?";
    int account;
    char name[30];
    double balance;
    while(cin>>account>>name>>balance)
    {
        outClientFile << account << " " << name << " " << balance << endl;
        cout << "?";
    }
    return 0;
}
