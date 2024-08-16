#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(s.length() < 3){
            cout<<"NO"<<endl;
            continue;
        }
        if(s[0] != '1' || s[1] != '0'){
            cout<<"NO"<<endl;
        }else if(s[2] == '0'){
            cout<<"NO"<<endl;
        }else{
            string p = "";
            for(int i = 2 ; i < s.length() ; i++){
                p += s[i];
            }
            if(stoll(p) < 2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}