#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0;k < t; k++)
    {
        int n,m;
        cin >> n >>m;
        int a1[n+1], a2[m+1], d[100005]={0},dd[100005]={0}, b[n+1];
        for (int j = 1;j <= n; j++) {cin >> a1[j];d[a1[j]]++;}
        for (int j = 1;j <= m; j++) {cin >> a2[j];dd[a2[j]]++;}
        int pos=0;
        for (int j = 1;j <= n; j++)
            if(!dd[a1[j]]) b[pos++]=a1[j];
        sort(b,b+pos);
        int index=0;
        for(int j = 1;j <= m; j++)
        {
            while(d[a2[j]])
            {
                a1[index++]=a2[j];
                d[a2[j]]--;
            }
        }
        for(int i=0;i<index;i++) cout << a1[i]<< " ";
        for(int j=0;j<pos;j++) cout << b[j]<< " ";
        cout << endl;
    }
}
