#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

struct Fraction
{
    ll n,d;
};

void read_input(Fraction &A)
{
    cin >> A.n >> A.d;
}

void simplest(Fraction &A)
{
    int c = __gcd(A.n,A.d);
    A.n = A.n/c;
    A.d = A.d/c;
}

void process(Fraction A, Fraction B)
{
    Fraction C;
    C.d = (A.d*B.d)/(__gcd(A.d,B.d));
    C.n = (A.n)*(C.d/A.d) + (B.n)*(C.d/B.d);
    simplest(C);
    C.n=C.n*C.n;
    C.d=C.d*C.d;
    simplest(C);
    cout << C.n <<"/" << C.d <<" ";
    Fraction D;
    D.n=A.n*B.n*C.n;
    D.d=A.d*B.d*C.d;
    simplest(D);
    cout << D.n <<"/" << D.d <<endl;
}
int T;
int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}
