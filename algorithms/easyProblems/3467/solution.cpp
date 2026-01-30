class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ret;

        int one = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0) ret.push_back(0);
            else one++;
        }

        while(one > 0){
            ret.push_back(1);
            one--;
        }
        return ret;
    }
};
