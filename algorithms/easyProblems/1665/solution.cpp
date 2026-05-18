class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {

        sort(tasks.begin(),tasks.end(),[&](vector<int>&x,vector<int>&y){
            return x[1]-x[0]>y[1]-y[0];
        });

        int cur = 0;
        int ret = 0;

        for(int i = 0; i < tasks.size(); i++){
            if(cur < tasks[i][1]){

                ret += tasks[i][1] - cur;
                cur = tasks[i][1];
            }
            cur -= tasks[i][0];
        }
        return ret;
    }
};
