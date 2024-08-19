#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    int n = s.length();
	    int pairs = 0;
	    int i = 0;
	    while(i < n){
	        if(s[i] == 'x' && s[i+1] == 'y'){
	            pairs++; i += 2; 
	        }
	        else if(s[i] == 'y' && s[i+1] == 'x'){
	            pairs++; i += 2; 
	        }
	        else{
	            i ++;
	        }
	        
	    }
	    cout<<pairs<<endl;
	}

}

