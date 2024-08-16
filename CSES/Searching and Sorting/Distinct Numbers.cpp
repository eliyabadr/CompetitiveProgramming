#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;

    int q; cin>>q;
    int count = 0;
    for(int i = 0 ; i < q ; i++){
        int t; cin>>t;
        if(m.find(t) == m.end()){ // value not present in map;
            m.insert(pair<int,string>(t,"y"));
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
