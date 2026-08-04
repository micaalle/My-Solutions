class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ret;
        
        sort(nums.begin(), nums.end());
        int x = nums[0];
        int y = nums[nums.size() - 1];
        int i = 0, cnt = 0;
        while(i + x <= y){
            if((i + x) != nums[cnt]){
                ret.push_back(i + x);
            } else {
                cnt++;
            }
            i++;
        }
        return ret;
    }
};
