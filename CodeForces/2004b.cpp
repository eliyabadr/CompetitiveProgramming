#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int l1, r1; cin>>l1>>r1;
		int l2, r2; cin>>l2>>r2;
		if(l1 > l2){
			int x = l1;
			l1 = l2;
			l2 = x;
			x = r1;
			r1 = r2;
			r2 = x;
		}
		if(r1 < l2){
			cout<<1<<endl;
		}else{
			int start = max(l1,l2);
			int end = min(r1,r2);

			int overlap = end-start;

			if(l1 == l2 && r1 == r2){
				cout<<overlap<<endl;
			}
			else{
				if(start != 1 && l1 != l2){
					overlap++;	
				}
				if(end != 100 && r1!=r2){
					overlap++;
				}
				cout<<overlap<<endl;
			}

		}
	}
	return 0;
}