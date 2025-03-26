int prefixCount(char** words, int wordsSize, char* pref) {
    int ret = 0;
    int len = strlen(pref);
    for(int i = 0; i < wordsSize; i++){
        if(words[i][0] == pref[0]){
            ret++;
            for(int j = 1; j < len; j++){
                if(words[i][j] != pref[j]){
                    ret--;
                    break;
                }
            }
        }
    }
    return ret;
}
