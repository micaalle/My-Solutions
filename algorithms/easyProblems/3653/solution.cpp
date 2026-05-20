class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
            
        int ret = 0;

        for(int i = 0; i < queries.size(); i++){

            int idx = queries[i][0];
            while(idx <= queries[i][1]){
                nums[idx] = (1LL * nums[idx] * queries[i][3]) % 1000000007;
                idx += queries[i][2];
            }
        }

        for(int i = 0; i < nums.size(); i++){
            ret = ret ^ nums[i];
        }

        return ret;
    }
};
