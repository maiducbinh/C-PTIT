#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int y=n/365;
    int w=(n-y*365)/7;
    int d=n-y*365-w*7;
    cout << y << " " << w <<" "<< d;
}
