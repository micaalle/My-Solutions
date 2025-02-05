double knightProbability(int n, int k, int row, int column) {
    
    double ** dp = calloc(n, sizeof(double*));
    
    for (int i = 0; i < n; i++) {
        dp[i] = calloc(n, sizeof(double));  
    }

    dp[row][column] = 1.0;

    // all possible moves a knight can do 
    int moves[8][2] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

    for(int v = 1; v <= k; v++){

        //allocate space for new DP maxtrix that will store the new probabilties
        double ** new = calloc(n, sizeof(double*));
    
        for (int i = 0; i < n; i++) {
            new[i] = calloc(n, sizeof(double));  
        }

        //update the new dp table based on the previous one
        for(int r = 0; r < n; r++){          
            for(int c = 0; c < n; c++){
                for(int i = 0; i < 8; i++){
                    int rowPos = r + moves[i][0];
                    int colPos = c + moves[i][1];

                    //checks if the new position is within bounds 
                    if (rowPos >= 0 && rowPos < n && colPos >= 0 && colPos < n){
                        new[r][c] += dp[rowPos][colPos] / 8.0;
                    }
                }
            }
        }

        // definitely should free dp here but its leetcode so it doesn't matter
        dp = new;
    }
    double ret = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            ret += dp[r][c];
        }
    }

    return ret;

}
