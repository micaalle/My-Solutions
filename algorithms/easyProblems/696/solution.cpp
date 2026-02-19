class Solution {
public:
    int countBinarySubstrings(string s) {
        int ret = 0, prev = 0, tmp = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1])
                tmp++;
            else {
                prev = tmp;
                tmp = 1;
            }
            if (tmp <= prev)
                ret++;
        }
        return ret;
    }
};
