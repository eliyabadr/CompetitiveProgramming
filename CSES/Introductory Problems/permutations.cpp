#include <iostream>
using namespace std;

int main(){
	int q;
	cin>>q;
	if(q==1){
		cout<<1;
	}else if(q == 2 || q == 3){
		cout<<"NO SOLUTION";
	}else{
		for(int i = 2 ; i <= q ; i+=2){
			cout<<i<<" ";
		}
		for(int i = 1 ; i <= q ; i+=2){
			cout<<i<<" ";
		}
	}
	return 0;
}
