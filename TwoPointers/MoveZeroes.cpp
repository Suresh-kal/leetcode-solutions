#include <bits/stdc++.h>
using namespace std;


// LeetCode 283 - Move Zeroes
// Approach: Two pointers (in-place)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=1,j=0;
        while(i<n && j < n){
            if(nums[j]!=0){
                j++;
            }else if(nums[i]!=0&& j < i){
                swap(nums[i++],nums[j++]);
            }else{
                i++;
            }
        }
    }
};