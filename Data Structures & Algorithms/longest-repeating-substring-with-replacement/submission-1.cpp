class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0;
        int l=0;

        int result=0;
        unordered_map<int,int>mp;
        int maxFreq=0;

        for(r=0;r<s.length();r++){
            mp[s[r]]++;
            maxFreq=max(maxFreq,mp[s[r]]);
            int window=r-l+1;

            while(window-maxFreq>k){
                mp[s[l]]--;
                l++;
                window=r-l+1;
            }
            result=max(result,window);

        }

    return result;
    }
};
