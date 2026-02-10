class Solution {
public:
    string removeOuterParentheses(string s) {
        string ret;
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (count > 0) ret.push_back(ch);
                count++;
            } else {
                count--;
                if (count > 0) ret.push_back(ch);
            }
        }
        return ret;
    }
};
