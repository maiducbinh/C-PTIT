#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	long long dem=0;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		int id=lower_bound(a+1,a+n+1,a[i]-k)-a;
		dem=dem+1LL*(id-i+1);
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	solve();
}
