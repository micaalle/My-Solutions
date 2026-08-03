class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ret = 0;
        while (n > 0) {
            ret += n;
            n = n - 8;
        }
        return ret;
    }
};
