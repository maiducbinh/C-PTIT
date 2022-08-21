#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream in("DOCUMENT.in");
    int n;
    in>>n;
    map <string,int> mp;
    while(n--)
    {
        string s;
        getline(in>>ws,s);
        int l = s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]==','||s[i]=='.'||s[i]=='?'
               ||s[i]=='!'||s[i]==':'||s[i]==';'
               ||s[i]=='-'||s[i]=='/'||s[i]=='('||s[i]==')')
                s[i]=' ';
            if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
        stringstream ss(s);
        string temp;
        while(ss>>temp)
        {
            mp[temp]++;
        }
    }
    set <int> s;
    for(auto i:mp)
        s.insert(i.second);
    stack <int> st;
    for(auto i:s)
        st.push(i);
    while(!st.empty()){
		for(auto it : mp){
			if(it.second == st.top()){
				cout<<it.first<<" "<<it.second<<endl;
			}
		}
		st.pop();
	}
}
