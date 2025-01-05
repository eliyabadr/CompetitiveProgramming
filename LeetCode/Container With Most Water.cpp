#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int mx = 0;
        while(i < j){
            int h = min(height[i] , height[j]);
            int a = (j-i)*h;
            mx = max(mx, a);
            if(height[i] < height[j]) i++;
            else j--;
        }    
        return mx;
    }
};


int main(){
	return 0;
}
