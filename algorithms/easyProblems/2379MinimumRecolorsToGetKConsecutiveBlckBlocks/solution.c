int minimumRecolors(char* blocks, int k) {
    int len = strlen(blocks);
    int ret = INT_MAX;
        if(k == len){
        ret = 0;
        for(int i = 0; i < len; i++){
            if(blocks[i] == 'W') ret++;
        }
        return ret;
    }
    for(int i = 0; i < len - k + 1; i++){
        int tmp = 0;
        for(int j = i; j < k + i; j++){
            if(blocks[j] == 'W') tmp++;

        }
        if(tmp < ret) ret = tmp;
    }
    return ret;
}
