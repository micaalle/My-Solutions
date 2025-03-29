bool isRobotBounded(char* instructions) {

    int x = 0, y = 0; 
    int dx = 0, dy = 1; 

    int len = strlen(instructions);

    for (int i = 0; i < len; i++) {
        if (instructions[i] == 'L') {
            int tmp = dx;
            dx = -dy;
            dy = tmp;
        } else if (instructions[i] == 'R') {
            int tmp = dx;
            dx = dy;
            dy = -tmp;
        } else if (instructions[i] == 'G') {
            x += dx;
            y += dy;
        }
    }

    return (x == 0 && y == 0) || (dx != 0 || dy != 1);
}
