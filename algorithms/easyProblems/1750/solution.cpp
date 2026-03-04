class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.length() - 1;

        while(left < right && s[left] == s[right]){
            char cur = s[left];

            while(left <= right && s[left] == cur) left++;
            while(left <= right && s[right] == cur) right--;
        }
        return (right >= left) ? (right - left + 1) : 0;
    }
};
