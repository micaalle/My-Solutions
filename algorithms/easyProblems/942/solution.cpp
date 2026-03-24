class Solution {
public:
    vector<int> diStringMatch(string s) {
        int inc = 0;
        int dec = s.length();
        vector<int> ret;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'D'){
                ret.push_back(dec);
                dec--;
            } else {
                ret.push_back(inc);
                inc++;
            }
        }
        if(s[s.length() - 1] == 'I'){
            ret.push_back(inc);
        } else {
            ret.push_back(dec);
        }

        return ret;
    }
};
