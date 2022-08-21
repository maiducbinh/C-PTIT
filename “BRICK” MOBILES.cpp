#include <iostream>
using namespace std;

void xuli(string &s)
{
    int l=s.length();
    for(int i=0;i<l;i++)
        if(s[i]>='a'&&s[i]<='z') s[i]-=32;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='A'||s[i]=='B'||s[i]=='C') s[i]='2';
        else
            if(s[i]=='D'||s[i]=='E'||s[i]=='F') s[i]='3';
        else
            if(s[i]=='G'||s[i]=='H'||s[i]=='I') s[i]='4';
        else
            if(s[i]=='J'||s[i]=='K'||s[i]=='L') s[i]='5';
        else
            if(s[i]=='M'||s[i]=='N'||s[i]=='O') s[i]='6';
        else
            if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S') s[i]='7';
        else
            if(s[i]=='T'||s[i]=='U'||s[i]=='V') s[i]='8';
        else
            if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z') s[i]='9';
    }
}

int check(string s)
{
    int l=s.length();
    for(int i=0;i<l/2;i++)
        if(s[i]!=s[l-i-1]) return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    for(int k=0;k<t;k++)
    {
        string s;
        cin >> s;
        xuli(s);
        //cout << s;
        if(check(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
