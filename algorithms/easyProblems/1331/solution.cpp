class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> tmp = arr;

        sort(tmp.begin(), tmp.end());
        int rank = 1;

        unordered_map<int, int> rk;

        for(int i = 0; i < tmp.size(); i++){
            if(!rk.count(tmp[i])) {
                rk[tmp[i]] = rank++;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            arr[i] = rk[arr[i]];
        }

        return arr;
    }
};
