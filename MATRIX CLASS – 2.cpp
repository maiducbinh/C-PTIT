#include <iostream>

using namespace std;

class Matrix
{
public:
    int n,m;
    int a[50][50];
    void input();
};

void Matrix::input()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];
}

void handle(Matrix m1, Matrix m2)
{
    int s[50][50]={0};
    for(int i=1;i<=m1.n;i++)
        for(int j=1;j<=m2.m;j++)
            for(int k=1;k<=m1.m;k++)
                s[i][j]+=m1.a[i][k]*m2.a[k][j];
    for(int i=1;i<=m1.n;i++)
    {
        for(int j=1;j<=m2.m;j++)
            cout<<s[i][j]<<" ";
        cout << endl;
    }
}
int main()
{
    Matrix m1,m2;
    int n,m,p;
    cin>>n>>m>>p;
    m1.n=n;
    m1.m = m2.n = m;
    m2.m = p;
    m1.input();
    m2.input();
    handle(m1,m2);
}

