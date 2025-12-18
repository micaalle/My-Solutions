class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int ret = 0;

        for(int i = 0; i < players.size(); i++){
            for(int j = i; j < trainers.size(); j++){
                if(trainers[j] >= players[i] && trainers[j] != 0){
                    ret++;
                    trainers[j] = 0;
                    break;
                }
            }
        }
        return ret;
    }
};
