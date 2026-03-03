class Solution {
public:
    string reverseByType(string s) {
        int right = s.length() - 1, left = 0;
        while(right > left){
            if(!isalpha(s[left])){
                left++;
            } 
            if(!isalpha(s[right])){
                right--;
            }  
            else if(isalpha(s[left]) && isalpha(s[right])){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        right = s.length() - 1, left = 0;
        while(right > left){
            if(isalpha(s[left])){
                left++;
            } 
            if(isalpha(s[right])){
                right--;
            }  
            else if(!isalpha(s[left]) && !isalpha(s[right])){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
