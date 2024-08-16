#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(k >= m && k >= n){
            cout<<m*n<<endl;
        }else if(m > k && n > k){
            cout<<k*k<<endl;
        }else{
            cout<<min(m,n)*k<<endl;
        }
    }
    return 0;
}
