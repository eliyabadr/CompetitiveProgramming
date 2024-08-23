#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  n *= 2;
  vector<int> v(n);
  for(auto &x : v) cin>>x;
  sort(v.begin() , v.end());
  int res = 0;
  for(int i = 0 ; i < n ; i+=2){
    res += min(v[i],v[i+1]);
  }
  cout<<res;
  return 0;
}
