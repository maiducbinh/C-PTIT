#include <iostream>

using namespace std;

struct Employee
{
    string name,gender,dob,address,tax,contract;
};

void input(Employee &a)
{
    getline(cin,a.name);
    getline(cin,a.gender);
    getline(cin,a.dob);
    getline(cin,a.address);
    getline(cin,a.tax);
    getline(cin,a.contract);
}

void print(Employee a)
{
    cout<<"00001"<<" "
    <<a.name<<" "
    <<a.gender<<" "
    <<a.dob<<" "
    <<a.address<<" "
    <<a.tax<<" "
    <<a.contract;
}
int main()
{
    struct Employee a;
    input(a);
    print(a);
    return 0;
}
