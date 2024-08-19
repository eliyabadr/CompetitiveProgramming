#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(auto &x : v){cin>>x;}
        sort(v.begin() , v.end());

        int sum1 = 0, sum2 = 0;
       
		if(k <= n/2){
			for(int i = 0 ; i < k ; i++){
				sum1 += v[i];
			}
			for(int i = k ; i < n ; i++){
				sum2 += v[i];
			}
		}else{
			reverse(v.begin(), v.end());
			for(int i = 0 ; i < k ; i++){
				sum1 += v[i];
			}
			for(int i = k ; i < n ; i++){
				sum2 += v[i];
			}
		}
		cout<<abs(sum2-sum1)<<endl;
	}
}


