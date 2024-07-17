#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int sum = (n*(n+1))/2;
	int sum2=0;
	n--;
	while(n--){
		int t; cin>>t;
		sum2+=t;
	}
	cout<<sum-sum2;
	return 0;
}
