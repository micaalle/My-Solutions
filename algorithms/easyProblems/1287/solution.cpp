class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int ret = 0, cnt = 1, val = 0;
        if(arr.size() == 1) return arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i - 1]){
                cnt++;
                if(cnt > ret){
                   ret = cnt; 
                   val = arr[i - 1];
                }
            }else {
                if(cnt > ret){
                   ret = cnt; 
                   val = arr[i - 1];
                }
                cnt = 1;
            } 
        }
        return val;
    }
};
