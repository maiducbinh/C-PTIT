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
        int a[n+1][n+1], d[100005]={0};
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin >> a[i][j];
        for(int j=1;j<=n;j++)
            d[a[1][j]]=1;
        int Count=0;
        for(int i=2;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(d[a[i][j]]==i-1)
                {
                    d[a[i][j]]=i;
                }
            }
        for(int j=1;j<=n;j++)
        if(d[a[n][j]]==n) {Count++;d[a[n][j]]=-1;}
        cout << Count << endl;
    }
}

