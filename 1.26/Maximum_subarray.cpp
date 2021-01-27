class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())   
            return 0;
        int res = nums[0];
        int cur = nums[0];
        for (int i = 1; i< nums.size(); i++){
            cur = max(nums[i],nums[i]+cur);
            res = max(res, cur);
        }
        return res;
    }
};
