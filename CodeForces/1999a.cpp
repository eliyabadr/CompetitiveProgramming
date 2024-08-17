#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		char c1 = s[0];
		char c2 = s[1];
		int a = c1 - '0';
		int b = c2 - '0';
		cout<<a+b<<endl;
	}
	return 0;
}
