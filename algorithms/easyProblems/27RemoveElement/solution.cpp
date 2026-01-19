class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            } else {
                ret++;
            }
        }
        return ret;
    }
};
