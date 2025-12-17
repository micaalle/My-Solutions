class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ret = 0;
        int n = pref.length();

        for(int i = 0; i < words.size(); i++){

            int cnt = 0;

            for(int j = 0; j < words[i].length(); j++){

                if(words[i][j] == pref[cnt]){
                    cnt++;
                } else {
                    break;
                }
                if(cnt == n) ret++;
            }
        }
        return ret;
    }
};
