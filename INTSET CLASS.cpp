#include <iostream>
#include <map>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("DATA.in");
    int n, m;
    in>>n>>m;
    map <int,int> m1, m2;
    int a[n+1], b[m+1];
    for(int i=1;i<=n;i++) {in>>a[i];m1[a[i]]++;}
    for(int j=1;j<=m;j++) {in>>b[j];m2[b[j]]++;}
    for(auto i:m1)
        if(m2[i.first]!=0) cout<<i.first<<" ";

}
