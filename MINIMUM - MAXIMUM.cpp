#include <iostream>
using namespace std;

void findSmallest(int m, int s)
{
    if (s == 0)
    {
        (m == 1)? cout << 0 << " " << 0
                : cout << -1 << " " << -1;
        return ;
    }

    if (s > 9*m)
    {
        cout << -1 << " " << -1 ;
        return ;
    }
    int res[m];
    int sum = s;
    s -= 1;
    for (int i=m-1; i>0; i--)
    {
        if (s > 9)
        {
            res[i] = 9;
            s -= 9;
        }
        else
        {
            res[i] = s;
            s = 0;
        }
    }
    res[0] = s + 1;
    for (int i=0; i<m; i++)
        cout << res[i];
    cout<< " ";
    int r[m];
    for(int i=0;i<m;i++)
    {
        if(sum>9) {r[i]=9;sum-=9;}
        else
        {
            r[i]=sum;
            sum=0;
        }
    }
    for (int i=0; i<m; i++)
        cout << r[i];
}


int main()
{
    int m,s;
    cin>>m>>s;
    findSmallest(m, s);
    return 0;
}
