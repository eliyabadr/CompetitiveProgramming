#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		vector<int> v(n);
		for(auto &x : v){cin>>x;}
		sort(v.begin() , v.end());
		if(n == 1){
			cout<<v[0]<<endl; continue;
		}
		for(int i = n-1; i >= (n%2) + 1; i--){
			int j = i-1;
			v[j] += min(k, abs(v[i]-v[j]));
			k -= min(k, abs(v[i]-v[j]));
			if(k == 0){break;}
		}

		int sum = 0;
		int p = 1;
		for(int i = 0 ; i < n ; i++){
			sum += v[n-i-1]*p;
			p = p * (-1);
		}
		cout<<sum<<endl;
	}
	return 0;
}
