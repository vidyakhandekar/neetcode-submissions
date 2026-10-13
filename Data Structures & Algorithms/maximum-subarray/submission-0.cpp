class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0];
        int curr_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            int cal_max=max(nums[i],nums[i]+curr_sum);
            curr_sum=cal_max;
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum;
    }
};
