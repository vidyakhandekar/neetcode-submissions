class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
  
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        
        }
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
           if( mp.find(rem)!=mp.end()){
            int num=mp[rem];
            if(i!=num){
                 return {i,num};
            }
           
           }
        }

return {0,0};
    }
};
