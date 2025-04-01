long long mostPoints(int** questions, int questionsSize, int* questionsColSize) {
    long long * dp = calloc(sizeof(long long), 200001);
    for(int i = questionsSize - 1; i >= 0; i--){
        dp[i] = fmax(questions[i][0] + dp[questions[i][1] + i + 1], dp[i + 1]);
    }
    return dp[0];
}
