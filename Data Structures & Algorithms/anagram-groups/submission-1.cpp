class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>groups;
        for(auto s:strs){
            string sortS=s;
            sort(sortS.begin(),sortS.end());
            groups[sortS].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto i:groups){
            ans.push_back(i.second);
        }
        return ans;
    }
};
