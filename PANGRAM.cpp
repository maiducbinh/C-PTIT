#include <iostream>

using namespace std;

int check(string s,int k)
{
    int d[26]={0};
    int l = s.length();
    for(int i=0;i<l;i++)
        d[s[i]-'a']++;
    int Count = 0;
    for(int i=0;i<26;i++)
        if(d[i]==0) Count++;
    if(Count + k>=26) return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin.ignore();
        cin>>s;
        int k;
        cin>>k;
        if(check(s,k)) cout<<1;
        else cout<<0;
        cout<<endl;
    }
}
