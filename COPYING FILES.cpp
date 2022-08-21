#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream in("PTIT.in", ios::in);
    ofstream out("PTIT.out");
    string s;
    while(getline(in,s))
        out<<s<<endl;
}
