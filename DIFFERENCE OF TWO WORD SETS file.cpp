#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

void lowercase(string &s)
{
    int l = s.length();
    for(int i=0;i<l;i++)
        if(s[i]>='A'&&s[i]<='Z') s[i] += 32;
}

int main()
{
    ifstream in1("DATA1.in", ios::in );
    ifstream in2("DATA2.in", ios::in );
    string s1, s2;
    map <string,int> m1, m2;
    while(getline(in1,s1))
    {
        stringstream ss1(s1);
        string t1;
        while(ss1 >> t1)
        {
            lowercase(t1);
            m1[t1]++;
        }
    }
    while(getline(in2,s2))
    {
        stringstream ss2(s2);
        string t2;
        while(ss2 >> t2)
        {
            lowercase(t2);
            m2[t2]++;
        }
    }
    for(auto i:m1)
        if(m2[i.first]==0) cout << i.first << " ";
    cout << endl;
    for(auto j:m2)
        if(m1[j.first]==0) cout << j.first << " ";
}
