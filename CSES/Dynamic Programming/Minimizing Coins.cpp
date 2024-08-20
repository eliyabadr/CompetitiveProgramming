#include <bits/stdc++.h>
using namespace std;

int n,x; 
vector<int> dp(x+1, -1);

int solve(int z, vector<int> &g){
	if(z == 0){
		dp[z] = 1;
		return dp[z];
	}
	if(dp[z] != -1){
		return dp[z];
	}else{
		int best = INT_MAX;
		for(auto &h : g){
			if(z-h >= 0){
				best = min(best, solve(z-h ,g)+1);
			}
		}
		return best;
	}
}

int main(){
	cin>>n>>x;
	vector<int> b(n);
	for(auto &x : b){cin>>x;}
	cout<<solve(x,b);
	return 0;
}
