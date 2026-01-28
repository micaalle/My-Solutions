class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        string tmp = to_string(n);
        vector<int> ret;
        for(int i = 0; i < tmp.length(); i++){
            int val = ((tmp[i] - '0') * pow(10, tmp.length() - i - 1));
            if(val != 0){
                ret.push_back(val);
            }
        }
        return ret;
    }
};
