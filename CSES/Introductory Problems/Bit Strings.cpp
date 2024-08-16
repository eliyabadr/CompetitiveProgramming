#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    long long x = 1;
    long long y = pow(10,9)+7;
    for(long long i = 0 ; i < n ; i++){
        x = x * 2;
        x = x%y;
    }
    cout<<x<<endl;
    return 0;
}