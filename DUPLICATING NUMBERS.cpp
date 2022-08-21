#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long n, x, y;
        cin >> n >> x >>y;
        int g = __gcd(x,y);
        for(int j=0;j<g;j++) cout << n;
        cout << endl;
    }
}
