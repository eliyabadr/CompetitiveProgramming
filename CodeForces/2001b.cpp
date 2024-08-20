#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n, -1);
        if(n == 1){
            cout<<1<<endl;
        }else{
            if(n % 2 == 0){
                cout<<-1<<endl;
                continue;
            }else{
                v[(n/2)] = n;
                for(int i = 0 ; i < n/2 ; i++ ){
                    v[i] = 2*i+1;
                    v[n-1-i] = 2*i+2;
                }
            }
            for(auto &x : v){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
