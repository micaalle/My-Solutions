class Solution {
public:
    int titleToNumber(string ct) {
        long long ret = 0;
        int n = ct.length();
        for(int i = 0; i < n; i++){
            ret = ret * 26 + (ct[i] - 'A' + 1);
        }
        return (int)ret;
    }
};
