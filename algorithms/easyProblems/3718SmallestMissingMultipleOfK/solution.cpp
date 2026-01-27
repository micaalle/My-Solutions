class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int tmp = k;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == k) k += tmp;
            else if(nums[i] > k) return k;
        }

        return k;
    }
};
