#include <iostream>

using namespace std;
const int Mod=1000000007;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=n-1;i>=0;i--) cin>>a[i];
        long long pow=1, p=0;
        for(int i=0;i<n;i++)
        {
            p+=a[i]*pow;
            p%=Mod;
            pow*=x;
            pow%=Mod;
        }
        cout << p << endl;
    }
}
