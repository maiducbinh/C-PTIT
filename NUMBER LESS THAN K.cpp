#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	long long dem=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		int id=lower_bound(a,a+n,a[i]+k-1)-a;
		dem=dem+1LL*(id-i-1);
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	solve();
}
