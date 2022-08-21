#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin >> s;
        int l=s.length();
        int Count[1000]={0};
        for(int j=0;j<l;j++) Count[s[j]]++;
        for(int j=0;j<l;j++)
            if(Count[s[j]]==1) cout << s[j];
        cout << endl;
    }
}
