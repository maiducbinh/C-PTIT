#include <iostream>
#include <algorithm>

using namespace std;

const int mod = 1e9+7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long h=1;
        for(int i=0;i<n;i++) cin>>a[i];
        int g=a[0];
        for(int i=0;i<n;i++)
        {
            h*=a[i];
            h%=mod;
            g=__gcd(g,a[i]);
            g%=mod;
        }
        long long result=1;
        for(int i=1;i<=g;i++)
        {
            result*=h;
            result %= mod;
        }
        cout<<result<<endl;
        //cout<<h<<" "<<g;
    }
}
