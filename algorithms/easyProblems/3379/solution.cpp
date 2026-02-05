class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> ret;

        for (int i = 0; i < n; i++) {
            ret.push_back(nums[(((nums[i] + i) % n) + n) % n]);
        }
        return ret;
    }
};
