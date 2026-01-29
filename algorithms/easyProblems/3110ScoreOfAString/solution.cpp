class Solution {
public:
    int scoreOfString(string s) {
        int ret = 0;
        for(int i = 0; i < s.length() - 1; i++){
            ret += abs((s[i] - '0') - (s[i + 1] - '0'));
        }
        return ret;
    }
};
