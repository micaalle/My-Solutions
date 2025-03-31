 bool isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
         
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int longestPalindrome(char *s, char *t) {
    int ret = 0;
    int lenS = strlen(s);
    int lenT = strlen(t);

    char *arrS = malloc(sizeof(int) * 31);
    char *arrT = malloc(sizeof(int) * 31);

    for (int i = 0; i < lenS; i++) {
        for (int j = i + 1; j <= lenS; j++) {
            
            char *arrS = malloc(sizeof(int) * 31);
            strncpy(arrS, s + i, j - i);
            arrS[j - i] = '\0';

            for (int k = 0; k < lenT; k++) {
                for (int l = k + 1; l <= lenT; l++) {
                    
                    strncpy(arrT, t + k, l - k);
                    arrT[l - k] = '\0';

                    char *comb = malloc(sizeof(int) * 62);
                    strcpy(comb, arrS);
                    strcat(comb, arrT);

                    if (isPalindrome(comb)) {
                        int lencomb = strlen(comb);
                        if (lencomb > ret) {
                            ret = lencomb;
                        }
                    }
                    free(comb);
                }
            }
        }
    }
    
    for (int i = 0; i < lenS; i++) {
        for (int j = i + 1; j <= lenS; j++) {
            
            strncpy(arrS, s + i, j - i);
            arrS[j - i] = '\0';

            if (isPalindrome(arrS)) {
                int lenSSub = strlen(arrS);
                if (lenSSub > ret) {
                    ret = lenSSub;
                }
            }
        }
    }

    for (int i = 0; i < lenT; i++) {
        for (int j = i + 1; j <= lenT; j++) {
            
            strncpy(arrT, t + i, j - i);
            arrT[j - i] = '\0';

            if (isPalindrome(arrT)) {
                int lenTSub = strlen(arrT);
                if (lenTSub > ret) {
                    ret = lenTSub;
                }
            }
        }
    }
    
    return ret;
}
