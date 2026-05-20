class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        vector<vector<int>> chk;

        for (int i = 0; i < arr.size(); i++) {
            chk.push_back({__builtin_popcount(arr[i]), arr[i]});
        }

        sort(chk.begin(), chk.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[0] == b[0])
                     return a[1] < b[1];
                 return a[0] < b[0];
             });

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = chk[i][1];
        }

        return arr;
    }   
};
