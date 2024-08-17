#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,s,m; cin>>n>>s>>m;
		int starting = 0;
		int start , end;
		int mx = 0;
		while(n--){
			cin>>start>>end;
			mx = max(mx, start-starting);
			starting = end;
		}
		mx = max(mx, m - starting); 
		if(s <= mx){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
