#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> s(m);
    for(int i = 0 ; i < n ; i++){cin>>a[i];}
    for(int i = 0 ; i < m ; i++){cin>>s[i];}
    sort(a.begin(),a.end());
    sort(s.begin(),s.end());
	int result=0, i=0, j=0;	
	
	while(i < n && j < m){
		if(s[j] < a[i]-k){
			j++;
		}else if(s[j] > a[i]+k){
			i++;
		}else{
			j++; i++; result++;
		}
	}
	cout<<result;
	return 0;	
}
