#define min(a, b) (((a) < (b)) ? (a) : (b))

int countGoodRectangles(int** rectangles, int rectanglesSize, int* rectanglesColSize){
    int ret = 0;
    int max = 0;

    for(int i = 0; i < rectanglesSize; i++){
        int tmp = min(rectangles[i][0], rectangles[i][1]);
        if(tmp > max){
            max = tmp;
            ret = 1;
        }
        else if(tmp == max){
            ret++;
        }
    }

    return ret;
}
