class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        int n = s1.size();
        if (n != s2.size()){
           return false; 
        }
        std::vector<int> hash(26, 0);
        if (n == 2) {
            if (s1[0] != s2[0] || s1[1] != s2[1])
                return false;
        }
        int chk = 0;
        for (int i = 0; i < n; i++) {
            hash[s1[i] - 'a']++;
            hash[s2[i] - 'a']--;
            if (s1[i] != s2[i]) {
                chk++;
            }
            if (chk > 2)
                return false;
        }

        for (int i = 0; i < 26; i++) {
            if (hash[i] != 0)
                return false;
        }
        return true;
    }
};
