class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int total_product = 1;


        int zeros =0;

        for(auto i : nums)
        {
            if(i==0)zeros++;
            else total_product *=i;

        }
        vector<int>ans ;
        if(zeros >=2 )
        {
                ans.assign(nums.size() , 0);
        }else if(zeros == 1)
        {
            for(auto i : nums)
            {
                if(i==0)
                {
                    ans.push_back(total_product);
                }else
                {
                    ans.push_back(0);
                }
            }
        }else
        {
            for(auto i : nums)
            {
                
                ans.push_back(total_product/i);
                
            }
        }

        return ans;
    }
};
