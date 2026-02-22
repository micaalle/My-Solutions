class Solution {
public:
    int binaryGap(unsigned n) {
        int ret=0, tmp=32;
        for(; n>0; n&=(n-1)){
            int cnt=countr_zero(n);
            ret=max(ret, cnt-tmp);
            tmp=cnt;
        }
        return ret;
    }
};
