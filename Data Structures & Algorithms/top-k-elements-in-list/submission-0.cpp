class Solution {
public:
   static bool camp(const pair<int,int>&a,const pair<int,int>&b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int>freq;
     for(auto i:nums){
        freq[i]++;
     } 
     vector<pair<int,int>>sfreq(freq.begin(),freq.end());
     sort(sfreq.begin(),sfreq.end(),camp);
     vector<int>ans;
     for(int i=0;i<k;i++){
        ans.push_back(sfreq[i].first);
     }
     return ans;
    }
};
