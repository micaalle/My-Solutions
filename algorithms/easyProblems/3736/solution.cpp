class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_num = *std::max_element(nums.begin(), nums.end());
        int sum_num = std::accumulate(nums.begin(), nums.end(), 0);
        return max_num * nums.size() - sum_num;
    }
};
