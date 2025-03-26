char* capitalizeTitle(char* title) {
    int len = strlen(title);
    int tmp = 0;
    for(int i = 0; i < len; i++){
        if((title[i] == ' ' && tmp > 2)){
            title[i - tmp] = toupper(title[i - tmp]);
            printf("%d, %d \n",tmp, i);
            tmp = 0;
        } else if(title[i] == ' '){
            tmp = 0;
        }
        else{
            title[i] = tolower(title[i]);
            tmp++;
        }
        
    }

    if (tmp > 2) {
        title[len - tmp] = toupper(title[len - tmp]);
    }


    return title;
}
