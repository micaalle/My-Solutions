class Solution {
public:

    int wave(int num){

        string s = to_string(num);
        int ret = 0;
        for(int i = 1; i < s.size() - 1; i++){
            if((s[i] > s[i - 1] && s[i] > s[i + 1]) || (s[i] < s[i - 1] && s[i] < s[i + 1])) ret++;
        }
        return ret;
    }





    int totalWaviness(int num1, int num2) {
        int ret = 0;
        for(int i = num1; i <= num2; i++){
            ret += wave(i);
        }
        return ret;
    }
};
