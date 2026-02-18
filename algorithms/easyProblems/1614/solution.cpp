class Solution {
public:
    int maxDepth(string s) {
        int ret = 0;
        int tmp = 0;    
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') tmp++;
            else if(s[i] == ')') tmp--;

            if(tmp > ret) ret = tmp;
        }
        return ret;
    }
};
