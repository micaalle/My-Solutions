class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int low = 0, high = 0;
        for(int i = 0; i < k; i++){
            low += nums[i];
        }
        int i = nums.size() - 1;
        while(k != 0){
            high += nums[i];
            i--;
            k--;
        }
        return abs(high - low);
    }
};
