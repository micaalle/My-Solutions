class Solution {
public:
    int countOdds(int low, int high) {
        int ret = 0;
        if(low % 2 == 1) ret = 1;
        ret += (high - low) / 2;

        if(low % 2 == 0 && high % 2 == 1) ret++;
        return ret;
    }
};
