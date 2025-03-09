int numberOfAlternatingGroups(int* colors, int colorsSize, int k) {
    int ret = 0;
    int cnt = 0;
    int prev = colors[0];

    for(int i = 0; i < colorsSize + k - 1; i++){
        int j = i % colorsSize;

        if(colors[j] == prev){
            cnt = 0;
            prev = colors[j];
        } else{
            cnt++;
            if(cnt >= k - 1) ret++;
            prev = colors[j];
        }
    }
    return ret;
}
