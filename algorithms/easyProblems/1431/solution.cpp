class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ret;
        int max = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > max)
                max = candies[i];
        }
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max) {
                ret.push_back(true);
            } else {
                ret.push_back(false);
            }
        }
        return ret;
    }
};
