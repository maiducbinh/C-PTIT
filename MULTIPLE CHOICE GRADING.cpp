#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char da101[]="ABBADCCABDCCABD";
    char da102[]="ACCABCDDBBCDDBB";
    for(int i=0;i<n;i++)
    {
        int check=0;
        int ma;
        cin>>ma;
        if(ma==101)
        {
            for(int i=0;i<15;i++)
            {
                char answer;
                cin>>answer;
                if(answer==da101[i]) check++;
            }
        }
        else
            for(int i=0;i<15;i++)
            {
                char answer;
                cin>>answer;
                if(answer==da102[i]) check++;
            }
        float diem=(float)check/1.5;
        //cout<<check<<endl;
        cout<<setprecision(2)<<fixed<<diem<<endl;
    }
}
