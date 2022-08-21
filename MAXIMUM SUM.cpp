#include <iostream>

using namespace std;

void maxSum(int a[],int b[],int n,int m)
{
    int i = 0, j = 0;
    long long sum1 = 0, sum2 = 0;
    long long res = 0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            sum1 += a[i];
            i++;
        }
        else if(a[i]>b[j])
        {
            sum2 += b[j];
            j++;
        }
        else
        {
            res += max(sum1,sum2) + a[i];
            sum1 = sum2 = 0;
            i++;
            j++;
        }
    }
    while(i<n) sum1 += a[i++];
    while(j<m) sum2 += b[j++];
    res += max(sum1,sum2);
    cout<<res<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a1[n], a2[m];
        for(int &x:a1) cin>>x;
        for(int &x:a2) cin>>x;
        maxSum(a1,a2,n,m);
    }
}
