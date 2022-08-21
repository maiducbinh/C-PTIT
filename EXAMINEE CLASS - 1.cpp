#include <iostream>
#include <iomanip>

using namespace std;

class Examinee
{
private:
    string name, dob;
    double s1, s2, s3;
public:
    void input();
    void output();
};

void Examinee::input()
{
    getline(cin,name);
    getline(cin,dob);
    cin>>s1>>s2>>s3;
}

void Examinee::output()
{
    cout<<name<<" "<<dob<< " ";
    cout<<setprecision(1)<<fixed<<s1+s2+s3;
}

int main()
{
    Examinee a;
    a.input();
    a.output();
}
