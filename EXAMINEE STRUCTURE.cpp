#include <iostream>
#include <iomanip>
using namespace std;

struct Examinee
{
    string name;
    string birth;
    float s1, s2, s3;
};
void input(Examinee &A)
{
    getline(cin,A.name);
    cin>>A.birth;
    cin>>A.s1>>A.s2>>A.s3;
}
void print(Examinee a)
{
    cout<<a.name<<" "<<a.birth<<" ";
    cout<<setprecision(1)<<fixed<<a.s1+a.s2+a.s3;
}
int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}
