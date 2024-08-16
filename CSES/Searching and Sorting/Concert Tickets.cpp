#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    multiset<int, greater<int>> tickets;
    while(n--){int t; cin>>t; tickets.insert(t);}
    while(m--){
        int client; cin>>client;
        auto itr = tickets.lower_bound(client);
        if(itr == tickets.end()){
            cout<<-1<<endl;
        }else{
            cout<<*itr<<endl;
            tickets.erase(itr);
        }
    }
    return 0;
}