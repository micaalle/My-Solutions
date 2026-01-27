class Solution {
public:
    long long removeZeros(long long n) {
        long long ret = 0;
        string tmp = to_string(n);
        int cnt = 0;
        for(int i = tmp.length() - 1; i >= 0; i--){
            if(tmp[i] != '0'){
                ret += (tmp[i] - '0') * pow(10, cnt); 
                cnt++;
            }
        }
        return ret;
    }
};
