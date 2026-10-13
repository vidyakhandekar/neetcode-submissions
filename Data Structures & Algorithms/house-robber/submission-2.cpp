class Solution {
public:
     vector<int>dp;
    int maxMoney(int n, vector<int>&nums){
        if(n>=nums.size()) return 0;
        if(dp[n]!=-1) return dp[n];

         dp[n]=nums[n]+max(maxMoney(n+2,nums),maxMoney(n+3,nums));
        return dp[n];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        dp.assign(nums.size(),-1);
        return max(maxMoney(0,nums),maxMoney(1,nums));
    }
};
