#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
struct sv{
	string id;
	string name;
	string Class;
	float x,y,z;
};

void scan(sv &a)
{
    cin.ignore();
    getline(cin,a.id);
    getline(cin,a.name);
    getline(cin,a.Class);
    cin>>a.x>>a.y>>a.z;
}

bool cmp(sv a,sv b)
{
    return a.name<b.name;
}
int main()
{
    int n;
    cin >> n;
    sv a[n+1];
    for(int i = 1;i<=n;i++) scan(a[i]);
    sort(a+1,a+n+1,cmp);
    for(int i = 1;i<=n;i++)
    {
        cout << i << " " << a[i].id << " " << a[i].name << " " <<a[i].Class <<" "
             <<setprecision(1)<<fixed << a[i].x <<" "<< a[i].y <<" "<< a[i].z<<endl;
    }
}
