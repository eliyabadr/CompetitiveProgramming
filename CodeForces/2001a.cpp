#include <bits/stdc++.h>
using namespace std;

int dis(vector<int> &g){
    int mn = INT_MAX;
    map<int,int> m;
    for(int i = 0 ; i < g.size() ; i++){
        if(m.find(g[i]) == m.end()){ // value not present in map;
            m[g[i]] = 1;
        }else{
            m[g[i]]++;
        }
    }
    int y = 0;
    for(int i = 0 ; i < g.size() ; i++){
        y = max(y, m[g[i]]);
    }
    return y;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(auto &x : v){
            cin>>x;
        }
        if(n == 1){
            cout<<0<<endl;
        }else{
            int x = dis(v);
            cout<<v.size()-x<<endl;
        }
    }
    return 0;
}
