void backtrack(int freq[], int *ret) {
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) { 
            (*ret)++; 
            freq[i]--;  
            backtrack(freq, ret); 
            freq[i]++; 
        }
    }
}

int numTilePossibilities(char* tiles) {
    int * freq = calloc(sizeof(int), 26);
    int n = strlen(tiles);

    for (int i = 0; i < n; i++)
        freq[tiles[i] - 'A']++;

    int ret = 0; 
    backtrack(freq, &ret);
    return ret;
}
