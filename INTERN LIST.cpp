#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student
{
    int index;
    string id, name, Class, email, corp;
};

struct corporation
{
    string List;
};
void scan(student &a)
{
    cin>>a.id;
    cin.ignore();
    getline(cin,a.name);
    getline(cin,a.Class);
    cin>>a.email>>a.corp;
}

bool cmp(student a, student b)
{
    return a.id<b.id;
}
int main()
{
    int n;
    cin>>n;
    student a[n+1];
    for(int i=1;i<=n;i++)
    {
        scan(a[i]);
        a[i].index=i;
    }
    int q;
    cin>>q;
    corporation b[q+1];
    for(int i=1;i<=q;i++)
        cin>>b[i].List;
    sort(a+1,a+n+1,cmp);
    for(int i = 1 ;i <= q;i++)
        for(int j = 1 ;j<=n;j++)
            if(b[i].List == a[j].corp)
                cout<<a[j].index<<" "<<a[j].id<<" "<<a[j].name<<" "<<a[j].Class<<" "<<a[j].email<<" "<<a[j].corp<<endl;
}
