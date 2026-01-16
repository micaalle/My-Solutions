class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ret;

        for(int i = 0; i < nums.size(); i++){
            int tmp = nums[i];

            if(ret.find(target - tmp) != ret.end()){
                return {i, ret[target - tmp]};
            }
            ret[tmp] = i;
        }
        return {};
    }
};
