#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(auto &x : nums) m[x]++;
        for(auto &x : nums){
            if(m[x] > n/2){
                return x;
            }
        }      
        return 0;
    }
};

int main(){
	return 0;
}
