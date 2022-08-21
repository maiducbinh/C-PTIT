#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin >> s;
        int l = s.length();
        int sum=0;
        for(int k=0;k<l;k++) sum+=s[k]-48;
        while(sum>9)
        {
            int n=sum,m=0;
            while(n!=0)
            {
                m+=n%10;
                n/=10;
            }
            sum=m;
        }
        if(sum==9) cout << "1";
        else cout << "0";
        cout << endl;
    }
}
