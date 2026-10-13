class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1) return s.length();
        int ans=1;
        unordered_set<int>st;
        int l=0;
        int r=1;
        st.insert(s[l]);
        int result=1;
        while (l<s.length() and r<s.length()){
         
            if(s[l]!=s[r] && st.find(s[r]) == st.end()){
                ans++;
                result=max(ans,result);
                st.insert(s[r]);
                r++;
                continue;
            }
            else if(s[l]==s[r]){
                l++;
                r++;
                continue;
            }
            else {
                l=r;
                r++;
                ans--;
            }
        }
        return result;
       
        
    }
};
