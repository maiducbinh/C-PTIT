#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int d1=abs(a-b);
    int d2=abs(b-c);
    int d3=abs(c-d);
    cout << __gcd(d1,__gcd(d2,d3));
}
