#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k, res = 0;
	cin>>n>>k;
	vector<int> v(n);
	for(auto &x : v){
		cin>>x;
	}
	for(auto &x : v){
		if(x >= v[k-1] && x > 0){
			res++;
		}
	}
	cout<<res;
	return 0;
}
