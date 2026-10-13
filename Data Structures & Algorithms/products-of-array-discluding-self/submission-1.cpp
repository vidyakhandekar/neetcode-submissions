class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalP=1;
        int zc=0;
        vector<int>ans(nums.size(),0);
        for(auto i:nums){
            if(i==0){
                zc++;
                continue;
            }
            totalP*=i;
        }
        if(zc>1){ return ans;}
        for (int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans[i]=totalP;
                continue;
            }
            if(zc==1){
                ans[i]=0;
            }
            else{
                ans[i]=totalP/nums[i];
            }
            
            
        }
        return ans;
    }
};
