class Solution {
public:
    int lengthOfLastWord(string s) {
        int ret = 0;
        int tmp = 0;
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i])){
                ret++;
            } else if(s[i] == ' '){
                if(ret != 0){
                    tmp = ret;
                }
                ret = 0;
            }
        }
        if(ret == 0) return tmp;
        else{
            return ret;
        }
    }
};
