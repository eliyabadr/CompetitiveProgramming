#include <bits/stdc++.h>
using namespace std;

int main(){
	int x; cin>>x;
	int b[5]={1,5,10,20,100};
	int counter = 0;
	int i = 0;
	while(x>0){
		if(x >= b[4-i]){
			counter++;
			x -= b[4-i];
		}else{
			i++;
		}
	}
	cout<<counter;
	return 0;
}
