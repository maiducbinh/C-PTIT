#include <iostream>
#include <algorithm>

using namespace std;

class Fraction
{
public:
    long long n, d;
    void input();
};

void Fraction::input()
{
    cin>>n>>d;
}

int main()
{
    Fraction a,b;
    a.input();
    b.input();
    long long d=(a.d*b.d)/(__gcd(a.d,b.d));
    long long n=a.n*(d/a.d)+b.n*(d/b.d);
    long long g=__gcd(d,n);
    cout<<n/g<<"/"<<d/g;
}

