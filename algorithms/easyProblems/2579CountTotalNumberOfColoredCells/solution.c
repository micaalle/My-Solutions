long long coloredCells(int n) {
    long long count = 0, inc = 1;
    if (n == 1) return 1;
    for(int i = n; i > 1; i--){
        count = count + 4 * inc;
        n--;
        inc++;
    }
    return count + 1;
}
