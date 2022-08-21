#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        int l=s.length();
        for(int i=0;i<l-2;i++)
            if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4')
            {
                for(int j=i;j<=i+2;j++)
                    s[j]='\0';
            }
        for(int i=0;i<l;i++)
            if(s[i]!='\0') cout<<s[i];
        cout<<endl;
    }
}
