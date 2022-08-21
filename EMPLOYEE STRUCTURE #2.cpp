#include <iostream>
#include <fstream>
#define foru(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

struct Employee
{
    int id;
    string name;
    string gender;
    string dob, address, tax, contract;
};
using namespace std;

void input(Employee &a)
{
    cin.ignore();
    getline(cin,a.name);
    getline(cin,a.gender);
    getline(cin,a.dob);
    getline(cin,a.address);
    getline(cin,a.tax);
    cin>>a.contract;
}

void printlist(Employee a[50],int n)
{
    foru(i,0,n-1)
    {
        if(i+1<10) cout<<"0000"<<i+1;
        else cout<<"000"<<i+1;
        cout<<" "<<a[i].name<<" "<<a[i].gender
        <<" "<<a[i].dob
        <<" "<<a[i].address<<" "
        <<a[i].tax<<" "<<a[i].contract;
        cout<<endl;
    }
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}
