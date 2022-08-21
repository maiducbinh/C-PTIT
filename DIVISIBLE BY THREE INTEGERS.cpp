#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long LCM(long long x, long long y, long long z)
{
    long long ans = ((x * y) / (__gcd(x, y)));
    return ((z * ans) / (__gcd(ans, z)));
}

long long find(long long n, long long x, long long y, long long z)
{
    long long lcm = LCM(x, y, z);
    long long so = pow(10, n-1);
    long long reminder = so % lcm;
    if (reminder == 0)
         return so;
    so += lcm - reminder;
    if (so < pow(10, n))
        return so;
    else
        return -1;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long x,y,z,n;
        cin>>x>>y>>z>>n;
        cout<<find(n,x,y,z)<<endl;
    }
    return 0;
}
