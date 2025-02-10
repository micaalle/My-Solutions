char* clearDigits(char* s) {
    int len = strlen(s);
    char * stack = malloc(sizeof(char) * len + 1);
    int top = -1;
    for(int i = 0; i < len; i++){
        if(top == -1){
            stack[++top] = s[i];
        }
        else if(!isdigit(s[i])){
            stack[++top] = s[i]; 
        } 
        else{
            top--;
        } 
    }
    stack[++top] = '\0';
    return stack;
}
