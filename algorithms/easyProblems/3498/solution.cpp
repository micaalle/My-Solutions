class Solution {
public:
    int reverseDegree(string s) {
        int ret = 0;
        for(int i = 0; i < s.length(); i++){
            ret += (26 - (s[i] - 'a')) * (i + 1);
        }
        return ret;
    }
};
