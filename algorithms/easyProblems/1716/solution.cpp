class Solution {
public:
    int totalMoney(int n) {
        int ret = 0, iter = 0, chk = 0;
        for (int i = 0; i < n; i++) {
            if (i % 7 == 0) {
                iter++;
                chk = iter;
            }
            ret += chk;
            chk++;
        }
        return ret;
    }
};
