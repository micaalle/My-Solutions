class Solution {
public:
    int pivotInteger(int n) {
        int max = 0;
        int left = 0;
        for(int i = 1; i <= n; i++){
            max += i;
        } 

        for(int i = 1; i <= n; i++){
            left += i;
            if(max == left) return i;
            max -= i;
        }
        return -1;  
    }
};
