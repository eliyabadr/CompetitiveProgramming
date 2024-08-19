#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int p = 0;
    while(n--){
        int counter = 0;
        for(int i = 0 ;  i < 3 ; i++){
            int x; cin>>x;
            if(x > 0){
                counter++;
            }
        }
        if(counter >= 2){
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}
