class Solution {
public:

    int product(int n){
        int pro = 1;

        while(n > 0){
            int tmp = n % 10;  
            pro *= tmp;
            n /= 10;
        }

        return pro;
    }

    int smallestNumber(int n, int t) {
        while(product(n) % t != 0){
            n++;
        }
        return n;
    }
};
