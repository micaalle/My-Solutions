class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0, ret = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) neg++;
            else if(nums[i] > 0) ret++;
        }

        if(ret > neg) return ret;
        else return neg;
    }
};
