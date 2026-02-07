class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int ret = n;

        int a = 0, b = 0;


        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a') a++;
        }

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a') a--;
            ret = min(ret, a + b);
            if(s[i] == 'b') b++;
        }
        return ret;
    }
};
