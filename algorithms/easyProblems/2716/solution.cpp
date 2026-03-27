class Solution {
public:
    int minimizedStringLength(string s) {
        int hash[26] = {0};
        int ret = 0;
        for(int i = 0; i < s.length(); i++){
            if(hash[s[i] - 'a'] == 0) ret++;
            hash[s[i] - 'a']++;

        }
        return ret;
    }
};
