class Solution {
public:
    int minElement(vector<int>& nums) {
        int ret = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int tmp = 0;
            while(nums[i] != 0){
                tmp += nums[i] % 10;
                nums[i] /= 10;
            }
            if(tmp < ret) ret = tmp;
        }
        return ret;
    }
};
