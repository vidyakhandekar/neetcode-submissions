class Solution {
public:
    bool checkAnagrams(string s,string t){
        if(s.size()!=t.size()) return false;
        map<char,int>mp1;
        map<char,int>mp2;

        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(int i=0;i<mp1.size();i++){
            if(mp1[i]!=mp2[i]){
                return false;
            }
        }
        return true;
    }
    void addAnagrams(string str,vector<vector<string>>&ans){
        int n=ans.size();
        if(n==0){
            ans.push_back({str});
            return;
        }
        bool isAnagram=false;
        for(int i=0;i<n;i++){
            if(checkAnagrams(str,ans[i][0])){
                cout<<"ana "<<str<<" camp "<<ans[i][0]<<endl;
                isAnagram=true;
                ans[i].push_back(str);
                break;
            }
        
        }
        if(!isAnagram)  ans.push_back({str});
        return;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int j=0;
        for(int i=0;i<strs.size();i++){
            addAnagrams(strs[i],ans);
        }
        return ans;
    }
};
