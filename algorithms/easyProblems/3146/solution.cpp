class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ret = 0;
        for(int i = 0; i < s.length(); i++){
            int tmp = s.find(t[i]);

            ret += abs(tmp - i);
        }
        return ret;
    }
};
