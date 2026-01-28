class Solution {
public:
    bool checkDivisibility(int n) {
        string tmp = to_string(n);
        int mul = tmp[0] - '0';
        int sum = tmp[0] - '0';
        for(int i = 1; i < tmp.length(); i++){
            mul *= tmp[i] - '0';
            sum += tmp[i] - '0';
            if(mul > n) return false;
        }
        return n % (sum + mul) == 0;
    }
};
