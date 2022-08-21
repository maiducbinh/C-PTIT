#include <iostream>

using namespace std;

int primenum(int n)
{
    if(n<2) return 0;
    if(n<4) return 1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}

void findprime(int n)
{
    for (int i=0; i<n; i++)
    {
        if (primenum(i)&&primenum(n-i))
        {
            cout << i << " " << (n-i) << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        findprime(n);
    }
    return 0;
}
