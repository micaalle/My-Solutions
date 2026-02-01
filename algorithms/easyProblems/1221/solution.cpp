class Solution {
public:
    int balancedStringSplit(string s) {
        int ret = 0;
        int left = 0, right = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'L') left++;
            else right++;

            if(left == right) ret++;
            
        }
        return ret;
    }
};
