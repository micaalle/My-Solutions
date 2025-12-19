class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ret = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){

                    long long sub = (nums[i] - nums[j]);
                    long long tmp = sub * nums[k];
                    if(tmp > ret) ret = tmp;

                }
            }
        }
        return ret;
    }
};
