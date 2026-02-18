class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ret;

        for(int i = 0; i < words.size(); i++){
            int tmp = 0;
            for(int j = 0; j < words[i].length(); j++){
                tmp += weights[words[i][j] - 'a'];
            }

            tmp = tmp % 26;
            printf("%d \n", tmp);
            ret.push_back(char('z' - tmp));
        }
        return ret;
    }
};
