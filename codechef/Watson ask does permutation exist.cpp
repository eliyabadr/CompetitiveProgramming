#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(auto &x : v){
			cin>>x;
		}
		sort(v.begin(), v.end());
		bool s = true;
		for(int i = 0 ; i < n-1 ; i++){
			if(v[i+1]-v[i] <= 1){
				continue;	
			}
			s = false;
		}
		if(!s){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
