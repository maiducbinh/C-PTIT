#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l = s.length();
        long long sum1 = 0, sum2 = 0;
        for(int i = 0; i<l ; i++)
            if(i%2==0) sum1+=s[i]-'0';
            else sum2+=s[i]-'0';
        if(abs(sum1-sum2)%11==0) cout << 1;
        else cout << 0;
        cout << endl;
    }
}
