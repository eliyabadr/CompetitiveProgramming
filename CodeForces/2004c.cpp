#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k; cin>>n>>k;
	vector<int> v(n);
	for(auto &x : v) cin>>x;
	sort(v.begin(), v.end(), greater<int>());
	int sum = 0;	
	int p = 1;
	for(int i = 0 ; i < n ; i++){
		if(i%2 != 0 && k > 0){
			int x = v[i];
			v[i] = min(v[i-1] , v[i]+k);
			k -= abs(v[i]-x);	
		}
		sum += p*v[i];
		p = (-1)*p;
	}
	cout<<sum<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
