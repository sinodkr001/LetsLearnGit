#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //   int ans=0;
    //   for(int i=0;i<nums.size();i++)
    //   {
    //       ans=ans^nums[i];
    //   }  
    //   for(int i=1;i<nums.size();i++)
    //   {
    //       ans=ans^i;
    //   }
    //   return ans;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return nums[i]; 
            }
        }

        return -1;
    }
};

int main() {
    vector<int> v={1,3,4,2,2};
    Solution s;
    cout<<"Duplicate Element is:"<<s.findDuplicate(v);

    return 0;
}