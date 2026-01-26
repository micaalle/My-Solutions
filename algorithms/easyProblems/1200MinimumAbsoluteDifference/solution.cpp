class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ret;
        int dif = INT_MAX, cnt = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            if(abs(arr[i] - arr[i + 1]) < dif){
                dif = abs(arr[i] - arr[i + 1]);
            }
        }

        for(int i = 0; i < arr.size() - 1; i++){
            if(abs(abs(arr[i] - arr[i + 1])) == dif){
                ret.push_back({arr[i], arr[i + 1]});
            }
        }
        return ret;
    }
};
