class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int ret = 0;
        int n = piles.size() / 3;
        int u = piles.size() - 2;
        for(int i = 0; i < n; i++){
            ret += piles[u];
            u -= 2;
        }
        return ret;
    }
};
