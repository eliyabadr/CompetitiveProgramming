#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(auto &x : v){cin>>x;}
		vector<bool> s(n,false);
		bool followed = true;	

		s[v[0]-1] = true;
		for(int i = 1 ; i < n ; i++){
			s[v[i]-1] = true;
            int curr = v[i]-1;
			if((curr-1 >= 0 && s[curr-1] == 0|| curr-1 == -1) && (curr+1 < n && s[curr+1]==0 || curr+1 == n)){
                followed = false; 
                break;
            }
		}
		if(followed){cout<<"YES"<<endl;}
		else{cout<<"NO"<<endl;}
	}
	return 0;
}
