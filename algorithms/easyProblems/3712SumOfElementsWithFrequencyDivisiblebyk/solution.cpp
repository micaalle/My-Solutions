class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int hash[101] = {};
        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        for(int i = 0; i < 101; i++){
            if(hash[i] != 0 && hash[i] % k == 0){
                ret += (i * hash[i]);
            }
        }
        return ret;
    }
};
