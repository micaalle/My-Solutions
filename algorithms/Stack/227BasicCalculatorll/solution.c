int calculate(char* s) {
    int * stack = malloc(sizeof(int) * 300001);
    int len = strlen(s);
    int top = -1;
    int num = 0;
    char sign = '+'; 
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        }

        if ((!isdigit(c) && c != ' ') || i == len - 1) {
            if (sign == '+') {
                stack[++top] = num;  
            } else if (sign == '-') {
                stack[++top] = -num;
            } else if (sign == '*') {
                stack[top] = stack[top] * num; 
            } else if (sign == '/') {
                stack[top] = stack[top] / num; 
            }
            
            num = 0;
            sign = c;
        }
    }
    
    int ret = 0;
    for (int i = 0; i <= top; i++) {
        ret += stack[i];
    }

    free(stack);
    return ret;
}
