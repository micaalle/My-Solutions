int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int num = 0;
    for (int i = 0; i < accountsSize; i++){
        int temp = 0;
        for(int j = 0; j <*accountsColSize; j++){
            temp += accounts[i][j];
        }
        if(temp > num){
            num = temp;
        }   
    }
    return num;
}
