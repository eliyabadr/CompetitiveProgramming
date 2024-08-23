#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,r,avg;
	cin>>n>>r>>avg;
	long long s = 0;
	vector<pair<long long,long long>> v(n);
	for(long long i = 0 ; i < n ; i++){
		cin>>v[i].second>>v[i].first;
		s += v[i].second;
	}
	sort(v.begin(), v.end());
	long long i = 0;
	long long res = 0;
	while(s < avg*n){
		if(v[i].second < r){
			res += v[i].first*min(r-v[i].second , avg*n-s);
			s += min((r-v[i].second) , avg*n-s);
			v[i].second = r;
		}else{
			i++;
		}
	}
	cout<<res;
	return 0;
}