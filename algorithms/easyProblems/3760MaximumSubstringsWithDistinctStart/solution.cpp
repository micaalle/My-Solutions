class Solution {
public:
    int maxDistinct(string s) {
        int hash[26] = {0};
        int ret = 0;
        for(int i = 0; i < s.length(); i++){
            hash[s[i] - 'a']++;
            if(hash[s[i] - 'a'] == 1) ret++;
        }
        return ret;
    }
};
