class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int ret = 0;  

        for(int i = 0; i < arr.size(); i++){
            if(ret + 1 <= arr[i]) ret++;
        }

        return ret;
    }
};
