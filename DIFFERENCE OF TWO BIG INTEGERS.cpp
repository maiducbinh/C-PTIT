#include <iostream>

using namespace std;

void diff(string a,string b)
{
    while(b.length()<a.length()) b="0"+b;
    while(a.length()<b.length()) a="0"+a;
    if(a<b) a.swap(b);
    string res="";
    int r = 0;
    int l = a.length();
    for(int i=l-1;i>=0;i--)
    {
        int num = int(a[i]-'0') - int(b[i]-'0') - r;
        if(num<0)
        {
            res = char(10+num+'0') + res;
            r = 1;
        }
        else
        {
            res = char(num+'0') + res;
            r = 0;
        }
    }
    cout<< res << endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x,y;
        cin.ignore();
        cin>>x>>y;
        diff(x,y);
    }
}
