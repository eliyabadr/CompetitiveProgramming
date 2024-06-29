#include <iostream>
#include <vector>
using namespace std;

int main(){
	int x;
	cin>>x;
	int sum = 0;
	int real = 0;
	for(int i = 0 ; i < x-1 ; i++){
		int temp;
		cin>>temp;
		sum += temp;
	}
	for(int i = 0 ; i < x+1 ; i++){
		real += i;	
	}
	cout<< real-sum;
	return 0;
}	
