class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ret;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 10){
                ret.push_back(nums[i]);
            } else {
                string tmp = to_string(nums[i]);
                for(int j = 0; j < tmp.length(); j++){
                    ret.push_back(tmp[j] - '0');
                }
            }
        }
        return ret;
    }
};
