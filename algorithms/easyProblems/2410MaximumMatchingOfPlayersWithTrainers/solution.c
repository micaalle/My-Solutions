int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int matchPlayersAndTrainers(int* players, int playersSize, int* trainers, int trainersSize) {
    int ret = 0; 
    qsort(players, playersSize, sizeof(int), comp);
    qsort(trainers, trainersSize, sizeof(int), comp);

    int tmp = trainersSize - 1;
    for(int i = playersSize - 1; i >= 0; i--){
        if(players[i] <= trainers[tmp]){
            tmp--;
            ret++;
        }
        if(tmp < 0) return ret;
    }
    return ret;
}
