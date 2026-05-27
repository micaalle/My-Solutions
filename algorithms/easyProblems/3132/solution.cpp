class Solution {
public:
    int numberOfSpecialChars(string word) {
        int hash[58] = {0};
        int ret = 0;
        for (int i = 0; i < word.length(); i++) {
            if (hash[word[i] - 'A'] != -1) {

                if(islower(word[i])){
                    if (hash[(word[i] - 'A') - 32] != 0) {
                        hash[(word[i] - 'A') - 32] = -1;
                        hash[(word[i] - 'A')] = -1;
                    } else {
                        hash[word[i] - 'A']++;
                    }
                }else{
                    hash[word[i] - 'A']++;
                }
            }
        }

        for (int i = 0; i < 26; i++) {
            if (hash[i] > 0 && hash[i + 32] > 0) ret++;
        }
        return ret;
    }
};
