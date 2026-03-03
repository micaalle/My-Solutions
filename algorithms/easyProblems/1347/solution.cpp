class Solution {
public:
    int minSteps(string s, string t) {
        int hash[26] = {0};
        int ret = 0;
        for(int i = 0; i < s.length(); i++){
            hash[s[i] - 'a']++; 
            hash[t[i] - 'a']--; 
        }
        for(int i = 0; i < 26; i++){
            if(hash[i] > 0) ret += hash[i];
        }
        return ret;
    }
};
