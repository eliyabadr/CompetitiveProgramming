#include <iostream>
#include <vector>
using namespace std;
void solve(long long n){
	vector<int> v;
	long long moves = 0;
	for(long long i = 0 ; i < n ; i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	for(long long i = 1 ; i < n ; i++){
		if(v[i] < v[i-1]){
			moves += v[i-1] - v[i];	
			v[i] = v[i-1];
		}
	}
	cout<<moves;
}
int main(){
	long long x;
	cin>>x;
	solve(x);
	return 0;
}
