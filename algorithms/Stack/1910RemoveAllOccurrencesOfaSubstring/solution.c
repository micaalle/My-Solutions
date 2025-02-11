char* removeOccurrences(char* s, char* part) {
    int len = strlen(s);
    int lensub = strlen(part);
    char * stack = malloc(sizeof(char) * (len + 1));
    int top = -1;
    for(int i = 0; i < len; i++){
        stack[++top] = s[i];
        
        if (s[i] == part[lensub - 1] && top >= lensub - 1) {
            int j = 0;
            while (j < lensub && stack[top - lensub + 1 + j] == part[j]) {
                j++;
            }
            if (j == lensub) {
                top -= lensub; 
            }
        }
    }
    stack[++top] = '\0';
    return stack;
    }
