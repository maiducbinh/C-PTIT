#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long sum=0,n,m;
        cin>>n>>m;
        sum=(n*(n+1))/2;
        if(sum<m) cout<<"No";
        else
        {
            long long num1=(sum+m)/2;
            long long num2=sum-num1;
            if(num1+num2 == sum && num1-num2==m && __gcd(num1,num2) == 1) cout << "Yes";
            else cout << "No";
        }
        cout << endl;
    }
}
