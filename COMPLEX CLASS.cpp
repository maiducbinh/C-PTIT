#include <iostream>

using namespace std;

class Complex
{
public:
    double r, i;
    void input();
};

void Complex::input()
{
    cin>>r>>i;
}

Complex product(Complex a, Complex b)
{
    Complex res;
    res.r = a.r*b.r-a.i*b.i;
    res.i = a.r*b.i+a.i*b.r;
    return res;
}

void Calc(Complex a, Complex b)
{
    Complex sum;
    sum.r=a.r+b.r;
    sum.i=a.i+b.i;
    Complex c,d;
    c=product(sum,a);
    d=product(sum,sum);
    cout<<c.r<<" ";
    if(c.i>0) cout<<"+";
    else cout<<"-";
    cout<<" "<<abs(c.i)<<"i"<<","<<" ";
    cout<<d.r<<" ";
    if(d.i>0) cout<<"+";
    else cout<<"-";
    cout<<" "<<abs(d.i)<<"i"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Complex a,b;
        a.input();
        b.input();
        Calc(a,b);
    }
}
