class Solution {
public:
    int mirrorDistance(int n) {
        string tmp = to_string(n);
        int ret = 0;
        for(int i = 0; i < tmp.length(); i++){
            ret += (tmp[i] - '0') *  pow(10, (i));
        }
        return abs(n - ret);
    }
};
