#include <iostream>

using namespace std;

class Employee
{
private:
    string name, gender, dob, address;
    string tax;
    string cd;
public:
    void input();
    void output();
};

void Employee::input()
{
    getline(cin,name);
    getline(cin,gender);
    getline(cin,dob);
    getline(cin,address);
    getline(cin,tax);
    getline(cin,cd);
}

void Employee::output()
{
    cout<<"00001"<<" "<<name
    <<" "<<gender<<" "<<dob
    <<" "<<address<<" "<<tax
    <<" "<<cd;
}

int main()
{
    Employee a;
    a.input();
    a.output();
}
