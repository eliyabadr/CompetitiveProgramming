#include <bits/stdc++.h>
using namespace std;



int fib(int n){
	int L[2] = {0,1};
	for(int i = 2 ; i <= n ; i++){
		int z = L[0]+L[1];
		L[0]= L[1];
		L[1] = z;
	}
	return L[1];
}

int main(){
	int x; cin>>x;
	cout<<fib(x)%(pow(10,18)+7);
	return 0;
}
