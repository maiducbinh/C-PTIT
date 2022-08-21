#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592653589793238

using namespace std;

struct point{
	double x,y;
};

void input(point &a)
{
	cin>>a.x>>a.y;
}
double distance(point a,point b)
{
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y-b.y)*(a.y-b.y));
}

void print(point a,point b ,point c)
{
	double n = distance(a,b);
	double m = distance(a,c);
	double p = distance(b,c);
	if(n + m > p && n + p > m && p + m > n)
    {
		double g = sqrt(n + m + p);
		double k = sqrt(n + m - p);
		double j = sqrt(m + p - n);
		double l = sqrt(p + n - m);
		double s = (g*k*j*l)/4;
        double r = m*n*p/(4*s);
		cout<<fixed<<setprecision(3)<<PI*r*r<<endl;
	}else
		cout<<"INVALID"<<endl;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		point A,B,C;
		input(A);
		input(B);
		input(C);
		print(A,B,C);
	}
	return 0;
}
