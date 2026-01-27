class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ret;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i + 1] != nums[i] + 1){
                int tmp = nums[i] + 1;
                while(tmp != nums[i + 1]){
                    ret.push_back(tmp++);
                }
            }
        }
        return ret;
    }
};
