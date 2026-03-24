class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {

        vector<int> ret(k, 0);

        sort(logs.begin(), logs.end());


        int prev = logs[0][0];
        int hash[100001] = {0};
        int cnt = 0;

        for(int i = 0; i < logs.size(); i++){
            if(prev != logs[i][0]){
                memset(hash, 0, sizeof(hash));
                ret[cnt - 1]++;
                prev = logs[i][0];
                cnt = 0;
            }
            if(hash[logs[i][1]] == 0){
                hash[logs[i][1]] = 1;
                cnt++;
            }
        }
        ret[cnt - 1]++;
        return ret;
    }
};
