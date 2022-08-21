#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin >> n;
        int a[n+1];
        for(int i=0;i<n;i++) cin >> a[i];
        int l, r;
        cin >> l >> r;
        int p=0, pos=l;
        for(int i=l;i<=r;i++)
            if(p<a[i]) {p=a[i];pos=i;}
        int cl=1, cr=1;
        for(int i=l+1;i<=pos;i++)
            if(a[i]<a[i-1]) cl=0;
        for(int i=pos+1;i<=r;i++)
            if(a[i]>a[i-1]) cr=0;
        //cout << cl <<" "<< cr;
        if(cl==1&&cr==1) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}
