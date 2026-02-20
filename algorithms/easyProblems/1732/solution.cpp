class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ret = 0, tmp = 0;

        for(int i = 0; i < gain.size(); i++){
            tmp = gain[i] + tmp;
            if(tmp > ret) ret = tmp;
        }
        return ret;
    }
};
