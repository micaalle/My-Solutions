class Solution {
public:
    bool isRobotBounded(string instructions) {

        int x = 0, y = 0; 
        int dx = 0, dy = 1;

        int len = instructions.length();

        for(int i = 0; i < len; i++){
            if(instructions[i] == 'G'){
                x += dx;
                y += dy;
            } else if(instructions[i] == 'L'){
                int tmp = dx;
                dx = -dy;
                dy = tmp;
            } else if(instructions[i] == 'R'){
                int tmp = dx;
                dx = dy;
                dy = -tmp;
            }
        }
        return (x == 0 && y == 0) || (dx != 0 || dy != 1);
    }
};
