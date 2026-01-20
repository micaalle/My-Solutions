class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int tmp = (left + right) / 2;
            if(nums[tmp] < target){
                left = tmp + 1; 
            } else if(nums[tmp] > target){
                right = tmp - 1;
            } else {
                return tmp;
            }
        }
        return left;
    }
};
