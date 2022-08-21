#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int l = s.length();
    for(int i=0;i<l;i++)
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    stringstream ss(s);
    string temp;
    while(ss>>temp)
    {
        cout<<temp[0];
    }
    for(int i=1;i<temp.length();i++)
        cout<<temp[i];
    cout<<"@ptit.edu.vn";
}
