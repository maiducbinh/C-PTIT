#include <iostream>

using namespace std;

class Employee
{
private:
    string name, pos;
    long long bs, wd;
public:
    void input();
    void output();
};

void Employee::input()
{
    getline(cin,name);
    cin>>bs>>wd;
    cin>>pos;
}

void Employee::output()
{
    cout<<"NV01"<<" "<<name<<" "
    <<bs*wd<<" ";
    double bonus=0;
    if(wd>=25) bonus=0.2;
        else if(wd>=22&&wd<25) bonus=0.1;
    long long salpos;
    switch (pos[0])
    {
        case 'G':
            salpos=250000;
            break;
        case 'P':
            salpos=200000;
            break;
        case 'T':
            salpos=180000;
            break;
        case 'N':
            salpos=150000;
    }
    long long msal=bs*wd;
    cout<<msal*bonus<<" "<<salpos<<" "<<(long long)(msal+msal*bonus+salpos);
}

int main()
{
    Employee a;
    a.input();
    a.output();
}

