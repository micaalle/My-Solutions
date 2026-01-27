class Solution {
public:
    string largestEven(string s) {
        for(int i = s.length() - 1; i >= 0; i--){
            int tmp = atoi(&s[i]);
            if(tmp % 2 != 0){
                s.erase(i);
            }
            else{
                return s;
            }
        }
        return s;
    }
};
