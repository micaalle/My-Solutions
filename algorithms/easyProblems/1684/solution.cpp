class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int hash[26] = {0};
        int ret = 0;
        for(int i = 0; i < allowed.length(); i++){
            hash[allowed[i] - 'a']++;
        }

        for(int i = 0; i < words.size(); i++){
            bool con = true;
            for(int j = 0; j < words[i].size(); j++){
                if(hash[words[i][j] - 'a'] == 0){
                    con = false;
                    break;
                } 
            }
            if(con) ret++;
        }
        return ret;
    }
};
