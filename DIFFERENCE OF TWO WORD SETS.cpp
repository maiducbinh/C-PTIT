#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int check(string x,vector <string> v)
{
    for(string &i:v)
        if(x == i) return 0;
    return 1;
}

bool cmp(string a,string b)
{
    return a<b;
}

void handle(string a,string b)
{
    stringstream ss1(a);
    stringstream ss2(b);
    vector <string> v1;
    vector <string> v2;
    string temp2;
    while(ss2 >> temp2) v2.push_back(temp2);
    string temp1;
    while(ss1 >> temp1)
    {
         if(check(temp1,v1)&&check(temp1,v2)) v1.push_back(temp1);
    }
    sort(v1.begin(),v1.end(),cmp);
    for(string &i:v1)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        //cin.ignore();
        getline(cin,s1);
        //cin.ignore();
        getline(cin,s2);
        //cout << s1 << endl << s2;
        handle(s1,s2);
    }
}
