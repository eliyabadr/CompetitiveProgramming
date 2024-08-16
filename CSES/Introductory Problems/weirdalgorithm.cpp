#include <iostream>
using namespace std;

void solve(long long n){
	cout<<n<<" ";
	while(n != 1){
		if(n%2 == 0){
			n = n/2;
		}
		else {
			n = (n*3)+1;
		}
		cout<<n<<" ";
	}
}

int main(){
	long long x;
	cin>>x;
	solve(x);
	return 0;
}
