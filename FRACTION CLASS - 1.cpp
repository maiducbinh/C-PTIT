#include <iostream>
#include <algorithm>

using namespace std;

class Fraction
{
private:
    long long n, d;
public:
    void input();
    void output();
};

void Fraction::input()
{
    cin>>n>>d;
}

void Fraction::output()
{
    long long g = __gcd(n,d);
    cout<<n/g<<"/"<<d/g;
}

int main()
{
    Fraction f;
    f.input();
    f.output();
}
