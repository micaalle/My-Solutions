class Solution {
public:
    int minOperations(string s) {
        
        int cnt = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(i % 2 == 0){
                if(s[i] == '1') {
                    cnt++;
                }
            } else {
                if(s[i] == '0') {
                    cnt++;
                }
            }
        }
        return min(cnt, (int)s.length() - cnt);
    }
};
