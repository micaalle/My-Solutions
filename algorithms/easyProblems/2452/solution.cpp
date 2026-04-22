class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int cnt = 0;
        vector<string> ret;

        for(int i = 0; i < queries.size(); i++){
            for(int j = 0; j < dictionary.size(); j++){
                cnt = 0;  
                for(int k = 0; k < dictionary[j].length(); k++){
                    if(queries[i][k] != dictionary[j][k]) cnt++;
                    if(cnt == 3) break;
                }

                if(cnt < 3){
                   ret.push_back(queries[i]); 
                   cnt = 0;
                   break;
                } 
            }
        }
        return ret;
    }
};
