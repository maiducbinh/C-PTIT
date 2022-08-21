#include <iostream>
#include <cmath>

using namespace std;

void countNum(int n)
{
    int lim = sqrt(n);
    int d[lim+1];
    for(int i=1;i<=lim;i++) d[i]=i;
    for(int i=2;i<=lim;i++)
        if(d[i]==i)
        {
            for(int j=i*i;j<=lim;j+=i)
                if(d[j]==j) d[j] = i;
        }
    int Count = 0;
    for(int i=2;i<=lim;i++)
    {
        int p = d[i];
        int q = d[i/d[i]];
        if(p*q==i&&q!=1&&p!=q) Count++;
        else
            if(d[i]==i)
                if(pow(i,8)<=n) Count++;
    }
    cout<<Count;
}

int main()
{
    int n;
    cin>>n;
    countNum(n);
}
