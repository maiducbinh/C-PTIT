#include <iostream>
#include <iomanip>

using namespace std;

class EntranceExam
{
private:
    string ID, name;
    double m, p, c;
public:
    void input();
    void output();
};

void EntranceExam::input()
{
    getline(cin,ID);
    getline(cin,name);
    cin>>m>>p>>c;
}

void out(double score)
{
    int res = score * 10;
    if(res%10)
        cout<<setprecision(1)<<fixed<<score;
    else cout<<setprecision(0)<<fixed<<score;
    cout<< " ";
}

void EntranceExam::output()
{
    cout<<ID<<" "<<name<<" ";
    double bonus;
    switch (ID[2])
    {
        case '1':
            bonus = 0.5;
            break;
        case '2':
            bonus = 1;
            break;
        case '3':
            bonus = 2.5;
            break;
    }
    out(bonus);
    out(m*2+p+c);
    if(m*2+p+c+bonus<24) cout<<"FAILED";
    else cout<<"PASSED";
}

int main()
{
    EntranceExam a;
    a.input();
    a.output();
}


