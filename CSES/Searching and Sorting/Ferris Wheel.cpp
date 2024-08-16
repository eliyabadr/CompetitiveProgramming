#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v , int t){
	sort(v.begin() , v.end());
	int i = 0 , j = v.size()-1 , count = 0;
	while(i <= j){
		if(v[i] + v[j] > t){
			count++;
			j--;
		}else{
			i++;
			j--;
			count++;
		}
	}
	return count;
}

int main(){
	int n , x; cin>>n>>x;
	vector<int> v1(n);
	for(auto &y:v1){cin>>y;}
	cout<<solve(v1,x);
	return 0;
}