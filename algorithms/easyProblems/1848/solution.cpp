class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ret = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(target == nums[i]){
                int tmp = abs(i - start);
                if(tmp < ret) ret = tmp;
            } 
        }

        return ret;
    }
};
