class Solution {
public:

    void twoSum(int target, vector<int>nums ,set<vector<int>>&ans, int left){
        int right=nums.size()-1;
        while(left<right){
            if(nums[left]+nums[right]==target){
                ans.insert({ target*-1,nums[left],nums[right]});
                left++;
                right--;
            }
            else if(nums[left]+nums[right]>target){
                right--;
            }
            else{
                left++;
            }

        }
        
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ele;
        for(int i=0;i<nums.size()-2;i++){

            twoSum(nums[i]*-1,nums,ele, i+1);
         
        }
        vector<vector<int>>result;
        for(auto i:ele){
          
            result.push_back(i);
        }
        return result;
    }
};
