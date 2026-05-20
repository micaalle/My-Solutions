class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n = encodedText.length();
        int m = n / rows, lim = rows;

        string ret;
        for (int i = 0; i < m; i++) {
            int tmp = i;


            while (tmp < n) {
                ret.push_back(encodedText[tmp]);
                
                if (tmp % m == m - 1)
                    break;

                tmp += (m + 1);
            }
        }

        while (!ret.empty() && ret.back() == ' ') ret.pop_back();

        return ret;
    }
};
