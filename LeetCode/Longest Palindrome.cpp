#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0;
        map<char, int> m;
        for(int i = 0 ; i < s.length() ; i++){
            m[s[i]]++;
        } 

        bool o = false;
        
        for(auto &[k, v] : m){
            if(v%2 == 0){
                res += v;
            }else{
                o = true;
                res += v-1;
            }
        }

        if(o){res++;}
        return res;
    }
};


int main(){
	return 0;
}
