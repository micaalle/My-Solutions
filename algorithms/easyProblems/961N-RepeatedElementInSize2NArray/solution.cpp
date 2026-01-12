class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int hash[10001] = {0};
        int n = nums.size()/2;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
            if(hash[nums[i]] == n) return nums[i];
        }
        return 0;      
    }
};
