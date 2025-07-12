int maxFreeTime(int eventTime, int k, int* startTime, int startTimeSize, int* endTime, int endTimeSize) {

    int ret = 0;
    int * total = calloc(sizeof(int),startTimeSize + 1);

    for(int i = 0; i < startTimeSize; i++){
        total[i + 1] = total[i] + endTime[i] - startTime[i];
    }

    for(int i = k - 1; i < startTimeSize; i++){
        int right = (i == startTimeSize - 1) ? eventTime : startTime[i + 1];
        int left = (i == k - 1) ? 0 : endTime[i - k];

        int tmp = right - left - (total[i + 1] - total[i - k + 1]);
        ret = fmax(ret, tmp);
    }

    return ret;
}
