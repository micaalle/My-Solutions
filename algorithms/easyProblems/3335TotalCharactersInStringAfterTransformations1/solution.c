#define MOD 1000000007

int lengthAfterTransformations(char* s, int t) {
    int ret = 0;
    int * hash = calloc(sizeof(int), 26);
    int len = strlen(s);
    
    for(int i = 0; i < len; i++){
        hash[s[i] - 'a']++;
    }

    for(int i = 0; i < t; i++){
        int * tmp = calloc(sizeof(int), 26);
        tmp[0] = hash[25];
        tmp[1] = (hash[25] + hash[0]) % MOD;
        for(int j = 2; j < 26; j++){
            tmp[j] = hash[j - 1];
        }
        memcpy(hash, tmp, sizeof(int) * 26);
    }
    for(int i = 0; i < 26; i++){
        ret = (ret + hash[i]) % MOD;
    }
    return ret;
}
