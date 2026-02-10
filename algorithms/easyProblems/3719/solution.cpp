class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int> even,odd;
            for(int j = i; j<nums.size(); j++){
                if(nums[j] % 2 ==0){
                    even.insert(nums[j]);
                }
                else{
                    odd.insert(nums[j]);
                }
                if(even.size() == odd.size()){
                    ret=max(ret, j-i+1);
                }
            }
        }
        return ret;
    }
};
