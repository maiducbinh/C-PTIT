#include <bits/stdc++.h>

using namespace std;

struct student
{
    string ID, Name, Class;
    float p1, p2, p3;
};

bool cmp(student a, student b)
{
    return a.Name < b.Name;
}

int main()
{
    int n;
    cin >> n;
    vector<student> v(n);
    for(student &i : v)
    {
        cin.ignore();
        getline(cin, i.ID);
        getline(cin, i.Name);
        getline(cin, i.Class);
        cin >> i.p1 >> i.p2 >> i.p3;
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 1;
    for(student &i : v)
    {
        cout << cnt++ << ' ' << i.ID << ' ' << i.Name << ' ' << i.Class << ' ' << setprecision(1) << fixed << i.p1 << ' ' << i.p2 << ' ' << i.p3 << endl;
    }
    return 0;
}
