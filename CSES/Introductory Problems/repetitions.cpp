#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long n = s.length();
	long long i = 0 , j = 0 , len = 0;
	while(j < n){
		if(s[j] == s[i]){
			j++;	
		}else{
			len = max(len, j-i);
			i = j;
		}
	}

	len = max(len, j-i);
	cout<<len;
	return 0;
}
