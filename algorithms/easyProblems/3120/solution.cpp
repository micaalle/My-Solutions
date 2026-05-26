class Solution {
public:
    int numberOfSpecialChars(string word) {
        int hash[58] = {0};
        int ret = 0;
        for(int i = 0; i < word.length(); i++){
            hash[word[i] - 'A']++;
        }

        for(int i = 0; i < 26; i++){
            if(hash[i] > 0 && hash[i + 32] > 0) ret++;
        }
        return ret;
    }
};
