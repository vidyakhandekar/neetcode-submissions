class Solution {
public:

    //o(n)+o(n)
    //o(n)+o(m)
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>freq;
        for(auto i: s){
            freq[i]++;
        }
        for(auto i:t){
            if(!freq.count(i)) return false;
            freq[i]--;
        }
        for(auto i:freq){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};
