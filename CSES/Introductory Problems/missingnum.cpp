#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin>>n;
	long long sum = (n*(n+1))/2;
	long long sum2=0;
	n--;
	while(n--){
		long long t; cin>>t;
		sum2+=t;
	}
	cout<<sum-sum2;
	return 0;
}
