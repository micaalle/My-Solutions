class Solution{
public:
    string clearDigits(string s){

        string ret;

        for(int i{0}; i < s.size(); i++){
            if(s[i] - '0' >= 0 and s[i] - '0' < 10) ret.pop_back();
            else ret.push_back(s[i]);
        }

        return ret;
    }
};
