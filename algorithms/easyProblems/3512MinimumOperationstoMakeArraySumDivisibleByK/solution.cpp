class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            ret += nums[i]; 
        }
        return ret % k;
    }
};
