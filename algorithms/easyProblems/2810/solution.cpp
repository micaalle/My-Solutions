class Solution {
public:
    string finalString(string s) {
        string ret;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'i'){
                reverse(ret.begin(), ret.end());
            }
            else {
                ret.push_back(s[i]);
            }
        }
        return ret;
    }
};
