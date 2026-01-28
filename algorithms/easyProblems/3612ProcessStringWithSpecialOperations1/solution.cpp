class Solution {
public:
    string processStr(string s) {
        string ret;

        for(int i = 0; i < s.length(); i++){
            if(s[i] != '*' && s[i] != '#' && s[i] != '%'){
                ret.push_back(s[i]);
            }
            else if(s[i] == '#'){
                string tmp = ret;
                ret.insert(ret.length(), tmp);
            }
            else if(s[i] == '%'){
                reverse(ret.begin(), ret.end());
            }
            else if(s[i] == '*'){
                if (!ret.empty()) ret.pop_back();
            }
        }
        return ret;
    }
};
