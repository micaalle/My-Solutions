class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int hash[26] = {0};
        int ret = INT_MAX;
        for(int i = 0; i < text.length(); i++){
            hash[text[i] - 'a']++;
        }

        hash[11] /= 2;
        hash[14] /= 2;

        ret = min(hash[1], hash[0]);
        ret = min(ret, hash[11]);
        ret = min(ret, hash[13]);
        
        return min(ret, hash[14]);
    }
};
