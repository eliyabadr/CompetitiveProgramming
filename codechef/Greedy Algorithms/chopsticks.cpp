#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d; cin>>n>>d;
    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }
    sort(v.begin() , v.end());
    
    int i = 0, pairs = 0;
    while( i < n-1 ){
        if(v[i+1] - v[i] <= d){
            
            pairs++; i += 2;
        }else{
            i++;
        }
    }
    cout<<pairs;

}

