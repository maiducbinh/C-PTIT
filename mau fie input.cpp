#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inClientFile("clients.dat", ios::in );
    if(!inClientFile)
    {
        cerr << "File could not be opened" << endl;
        exit (1);
    }
    int acc;
    char name[30];
    double balance;
    while(inClientFile >> acc >> name >> balance)
        cout << acc << " " << name << " " << balance << endl;
    return 0;
}
