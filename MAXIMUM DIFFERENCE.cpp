#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int m=a[0],ans=-1;
        for(int i=1;i<n;i++)
            if(a[i]>m)
                ans=max(ans,a[i]-m);
            else
                if(a[i]<m) m=a[i];
        cout << ans << endl;
    }
}
