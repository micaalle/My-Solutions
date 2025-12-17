class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (title[i] == ' ') {
                if (cnt > 2) {
                    title[i - cnt] = toupper(title[i - cnt]);
                }
                cnt = 0;
            } else {
                title[i] = tolower(title[i]);
                cnt++;
            }
        }

        if (cnt > 2) {
            title[n - cnt] = toupper(title[n - cnt]);
        }

        return title;
    }
};
