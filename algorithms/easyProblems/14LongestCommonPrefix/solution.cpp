class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        int prev = strs[0].length();
        string str = strs[0];

        for(int i = 1; i < strs.size(); i++){
            string tmp = strs[i];

            while(prev > tmp.length() || tmp.substr(0, prev) != str){
                prev--;
                if(prev == 0) return "";
                str = str.substr(0, prev);
            } 
        }
        return str;
    }
};
