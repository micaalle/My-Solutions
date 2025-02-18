char* smallestNumber(char* pattern) {
    int len = strlen(pattern);
    char * ret = malloc(sizeof(char) * (10));
    char min = '1';
    int top = 0;
    for(int i = 0; i < len; i++){
        if (pattern[i] == 'I'){
            ret[i] = min++;
            for(int j = i - 1; j >= top; j--){
                ret[j] = min++;
            }
            top = i + 1;
        }
    }
    for(int i = len; i >= top; i--){
       ret[i] = min++;  
    } 
    ret[len + 1] = '\0';
    return ret;
}
