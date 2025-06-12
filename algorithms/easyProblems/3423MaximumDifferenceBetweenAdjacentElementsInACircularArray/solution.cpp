class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int len = nums.size();
        int ret = 0;
        for(int i = 0; i < len; i++){
            if(abs((nums[i % len] - nums[(i + 1) % len])) > ret) ret = abs((nums[i % len] - nums[(i + 1) % len]));
        }
        return ret;
    }
};
