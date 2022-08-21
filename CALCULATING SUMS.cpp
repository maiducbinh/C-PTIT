#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("DATA.in", ios::in);
    string s;
    long long sum = 0;
    while(in>>s)
    {
        int l = s.length();
        if(l<=9)
        {
            int check = 0;
            for(int i = 0;i<l;i++)
                if(s[i]>='0'&&s[i]<='9') check++;
            if(check == l)
            {
                int x = stoi(s);
                sum+=x;
            }
        }
    }
    cout << sum;
}
