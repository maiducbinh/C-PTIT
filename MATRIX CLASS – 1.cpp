#include <iostream>

using namespace std;

class matrix
{
private:
    int n, m, a[50][50];
public:
    void input();
    void handle();
};

void matrix::input()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];
}

void matrix::handle()
{
    int s[50][50] = {0};
    int b[50][50];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) b[j][i]=a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            s[i][j]=0;
            for(int c=1;c<=m;c++)
                s[i][j]+=a[i][c]*b[c][j];
        }
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n;k++) cout << s[i][k] <<" ";
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        matrix a;
        a.input();
        a.handle();
    }
}
