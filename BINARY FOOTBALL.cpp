#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l=s.length();
    int d1=0,d2=0,dm=0;
    for(int i=0;i<l;i++)
        if(s[i]=='1')
        {
            d1++;d2=0;
            if(d1>dm) dm=d1;
        }
        else
        {
            d2++;d1=0;
            if(d2>dm) dm=d2;
        }
    if(dm>=7) cout << "YES";
    else cout << "NO";
}
