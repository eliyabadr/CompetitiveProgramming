#include <bits/stdc++.h>
using namespace std;

int main(){
	int q; cin>>q;
	while(q--){
		int x; cin>>x;
		if(x > 2){
			vector<int> v(x);
			for(auto &k : v){cin>>k;}
			cout<<"NO"<<endl;
		}else{
			int a,b; cin>>a>>b;
			if(abs(b-a) > 1){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
