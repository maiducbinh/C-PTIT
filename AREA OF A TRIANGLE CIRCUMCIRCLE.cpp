#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.141592653589793238

using namespace std;

struct point
{
    double x,y;
};

void input(point &a)
{
    cin >> a.x >> a.y;
}
double leng(point a,point b)
{
   return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        point a,b,c;
        input(a);
        input(b);
        input(c);
        double m = leng(a,b);
        double n = leng(b,c);
        double p = leng(a,c);
        double s = (m+n+p)*(m+n-p)*(m-n+p)*(n+p-m);
        if(s<=0) cout << "INVALID";
        else
        {
            s=1/4*sqrt(s);
            cout << setprecision(3) << fixed << m*n*p/(4*s) << endl;
        }
    }
}
