class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                ret = ret | nums[i];
            }
        }
        return ret;
    }
};
