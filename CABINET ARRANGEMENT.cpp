#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1][n+1]={0};
    int p = n*n, k=1, i=1, j=n;
    while(i<=n&&j>=1)
    {
        a[i][j]=k;
        i++;
        j--;
        k++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout << a[i][j] <<" ";
        cout << endl;
    }
}
