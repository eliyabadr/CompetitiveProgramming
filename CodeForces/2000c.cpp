#include <bits/stdc++.h>
using namespace std;

bool match(vector<int> &a , string s){
	if(s.length() != a.size()){
		return false;
	}else{
		unordered_map<int, char> t;
		unordered_map<char, int> z;
		for(int i = 0 ; i < a.size() ; i++){
			int key = a[i];
			char value = s[i];
			if(t.find(key) != t.end()){
				if(t[key] != value){
					return false;
				}
			}else{
				t[key] = value;
			}

			if(z.find(value) != z.end()){
				if(z[value] != key){
					return false;
				}
			}else{
				z[value] = key;
			}
		}
		return true;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		for(auto &x : a){cin>>x;}
		int m; cin>>m;
		vector<string> s(m);
		for(auto &x : s){cin>>x;}
		
		for(auto &x : s){
			bool y = match(a, x);
			if(y){
				cout<<"YES";
			}else{
				cout<<"NO";
			}
			cout<<endl;
		}
		
	}
	return 0;
}
