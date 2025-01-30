#define MOD 1000000007
#define ll long long int
int countPaths(int n, int** roads, int roadsSize, int* roadsColSize) {

    ll ***dp = malloc(n * sizeof(ll **));
    for (ll i = 0; i < n; i++) {
        dp[i] = malloc(n * sizeof(ll *));
        for (ll j = 0; j < n; j++) {
            dp[i][j] = malloc(2 * sizeof(ll)); 
        }
    }

    // initialize dp arrays
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (i != j) {
                dp[i][j][0] = 1e13;  
                dp[i][j][1] = 0;      // No paths initially
            } else {
                dp[i][j][0] = 0;      // Distance to itself is 0
                dp[i][j][1] = 1;      // One way to stay at the same node
            }
        }
    }

    // set the direct distances from the roads and initialize the number of ways
    for (ll i = 0; i < roadsSize; i++) {
        int u = roads[i][0], v = roads[i][1], time = roads[i][2];
        
        dp[u][v][0] = time;
        dp[v][u][0] = time;
        dp[u][v][1] = 1;
        dp[v][u][1] = 1;
    }

    // Floyd-Warshall algorithm with path counting
    for (ll mid = 0; mid < n; mid++) {
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                if (i != mid && j != mid) {
                    // Check if a shorter path is found via the middle node
                    if (dp[i][mid][0] + dp[mid][j][0] < dp[i][j][0]) {
                        dp[i][j][0] = dp[i][mid][0] + dp[mid][j][0];
                        dp[i][j][1] = (dp[i][mid][1] * dp[mid][j][1]) % MOD;  // Multiply ways to reach via mid
                    } 
                    // If the same shortest path is found, accumulate the number of ways
                    else if (dp[i][j][0] == dp[i][mid][0] + dp[mid][j][0]) {
                        dp[i][j][1] = (dp[i][j][1] + (dp[i][mid][1] * dp[mid][j][1]) % MOD) % MOD;
                    }
                }
            }
        }
    }
    int ret = dp[n-1][0][1];
    return ret;
}
