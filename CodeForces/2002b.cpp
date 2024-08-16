#include <bits/stdc++.h>
using namespace std;

bool equal(vector<int> v1, vector<int> v2){ // If equal, bob surely wins
    if(v1 == v2){
        return true;
    }
    reverse(v2.begin(), v2.end());
    if(v1 == v2){
        return true;
    }
    return false;
}

int  main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> alice(n);
        vector<int> bob(n);
        for(int i = 0 ; i < n ; i++){
            cin>>alice[i];
        }
        for(int i = 0  ; i < n ; i++){
            cin>>bob[i];
        }
        if(equal(alice,bob)){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
}
return 0;
}
