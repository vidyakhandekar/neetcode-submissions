class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto i:strs){
            ans+='[';
            ans+=i;
            ans+=']';
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string tem;
        int start=-1;
        int end=-1;
        for(auto i:s)
        {
            if(i=='[' && start==-1){
                start=i;
                continue;
            }
            if(i==']'&& start !=-1){
                ans.push_back(tem);
                tem="";
                start=-1;
                continue;
            }
            tem+=i;

        }
        return ans;
    }
};
