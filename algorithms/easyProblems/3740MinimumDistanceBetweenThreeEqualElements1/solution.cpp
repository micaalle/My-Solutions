class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size() < 3) return -1;
        int ret = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){
                    if(nums[i] == nums[j] && nums[i] == nums[k]){
                        int tmp = abs(i - j) + abs(j - k) + abs(k - i);
                        if(tmp < ret) ret = tmp;
                    }
                }
            }
        }
        if(ret == INT_MAX){
            return -1;
        }
        return ret;
    }
};
