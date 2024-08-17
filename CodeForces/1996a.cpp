#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		int count = 0;
		while(x > 1){
			if(x >= 4){
				count++;
				x -= 4;
			}else{
				count++;
				x -= 2;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
