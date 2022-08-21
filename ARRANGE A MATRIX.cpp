#include <iostream>
using namespace std;

int main()
{
    int m,n,k;
    cin >> m >> n >> k;
    int a[m+1][n+1];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++) cin >> a[i][j];
    for(int i=1;i<m;i++)
        for(int j=i+1;j<=m;j++)
            if(a[i][k]>a[j][k])
            {
                int tg=a[i][k];
                a[i][k]=a[j][k];
                a[j][k]=tg;
            }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
