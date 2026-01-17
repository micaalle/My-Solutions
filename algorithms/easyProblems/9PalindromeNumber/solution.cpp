class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x < 10) return true;
        string chk = to_string(x);

        int right = chk.length() - 1;
        int left = 0;

        while(right > left){
            if(chk[right--] != chk[left++]) return false;
        }
        return true;
    }
};
