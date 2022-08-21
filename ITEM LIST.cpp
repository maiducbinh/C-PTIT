#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct item
{
    int id;
    string name,group;
    float profit;
};

void scan(item &a)
{
    cin.ignore();
    getline(cin,a.name);
    getline(cin,a.group);
}

bool cmp(item a,item b)
{
    return a.profit>b.profit;
}
int main()
{
    int t;
    cin>>t;
    item a[t+1];
    for(int i = 1;i<=t;i++)
    {
        scan(a[i]);
        float buy,sell;
        cin >> buy >> sell;
        a[i].id=i;
        a[i].profit=sell-buy;
    }
    sort(a+1,a+t+1,cmp);
    for(int i=1;i<=t;i++)
    {
        cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].group<<" "
            <<setprecision(2)<<fixed<<a[i].profit<<endl;
    }
}
