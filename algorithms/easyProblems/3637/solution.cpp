class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int cnt = 0;
        while(cnt + 1 < nums.size() && nums[cnt] < nums[cnt + 1]){
            cnt++;
        }
        printf("\n");
        if(cnt < 1 || cnt == nums.size() - 1) return false;
        while(cnt + 1 < nums.size() && nums[cnt] > nums[cnt + 1]){
            cnt++;
        }
        if(cnt < 2 || cnt == nums.size() - 1) return false;
        while(cnt + 1 < nums.size() && nums[cnt] < nums[cnt + 1]){
            cnt++;
        }
        return cnt + 1 == nums.size();
    }
};
