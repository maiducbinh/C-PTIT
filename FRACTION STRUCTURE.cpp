#include <iostream>
#include <algorithm>
using namespace std;

struct Fraction
{
    long long t,m;
};
void input(Fraction &a)
{
    cin >> a.t >> a.m;
}
long long simplify(Fraction a)
{
    return __gcd(a.t,a.m);
}
void print(Fraction a)
{
    long long k=simplify(a);
    cout << a.t/k <<"/"<< a.m/k;
}
int main() {
    struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
