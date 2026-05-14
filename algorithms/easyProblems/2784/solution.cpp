class Solution {
public:
    bool isGood(vector<int>& nums) {

        int n = nums.size();
        if (n < 2) return false;

        sort(nums.begin(), nums.end());
        if(nums[n - 1] != n - 1) return false;
        int prev = nums[0];

        for(int i = 1; i < n - 1; i++){
            if(nums[i] - prev != 1) return false;
            prev = nums[i];
        }

        if(nums[n - 1] == n - 1 && nums[n - 2] == n - 1){
            return true;
        }
        return false;
    }
};
