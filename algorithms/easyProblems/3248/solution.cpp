class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ret = 0;
        
        for(int i = 0; i < commands.size(); i++){
            if(commands[i][0] == 'R'){
                ret++;
            }
            else if (commands[i][0] == 'L'){
                ret--;
            }
            else if (commands[i][0] == 'D'){
                ret += n;
            }
            else if (commands[i][0] == 'U'){
                ret -= n;
            }
        }
        return ret;
    }
};
