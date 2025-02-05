bool areAlmostEqual(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int * hash = calloc(sizeof(int), 26);
    if(len1 != len2) return false;
    int error = 0;
    for(int i = 0; i < len1; i++){
        if(s1[i] != s2[i]) error++;
        hash[s1[i] - 'a']++;
        hash[s2[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(hash[i] != 0) return false;
    }
    return((error == 2 || error == 0));
}
