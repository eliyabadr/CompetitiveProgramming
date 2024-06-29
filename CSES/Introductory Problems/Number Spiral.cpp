#include <iostream>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long row, col; cin>>row>>col;
 
		long long n = max(row,col);
		long long cube = 1+n*(n-1); 

		if(row == col){
			
		} else if(row > col){
			if(row%2==0){
				cube += (row-col);
			} else {
				cube -= (row-col);
			}
		} else {
			if(col%2==0){
				cube -= (col-row);
			} else {
				cube += (col-row);
			}
			
		}
		cout<<cube<<endl;
	}
	return 0;
}