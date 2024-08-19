#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int fun(int x, vector<int> &dp){
        if(dp[x] != -1){
            return dp[x];
        }
        else{
            if(x == 0 || x == 1){
                dp[x] = 1;
                return dp[x];
            }else{
                dp[x] = fun(x-1, dp)+fun(x-2, dp);
                return dp[x];
            }
        }
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return fun(n , dp);
    }
};

int main(){
	return 0;
}
