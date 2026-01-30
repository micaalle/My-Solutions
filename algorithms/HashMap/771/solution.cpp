class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int hash[65] = {0};
        int ret = 0;

        for(int i = 0; i < jewels.length(); i++){
            hash[(jewels[i] - 'a') + 32]++;
        }

        for(int i = 0; i < stones.length(); i++){
            if(hash[(stones[i] - 'a') + 32] != 0) ret++; 
        }
        return ret;
    }
};
