class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ret;
        if (nums.size() == 1){
            ret.push_back(0);
            return ret;
        } 
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        int left = 0;
        for(int i = 0; i < nums.size(); i++){
            sum -= nums[i];
            ret.push_back(abs(sum - left));
            left += nums[i];
        }
        return ret;
    }
};
