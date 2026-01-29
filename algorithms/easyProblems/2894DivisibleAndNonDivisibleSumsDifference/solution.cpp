class Solution {
public:
    int differenceOfSums(int n, int m) {
        int no = 0, div = 0;

        for(int i = 0; i <= n; i++){
            if(i % m == 0){
                div += i;
            }
            else{
                no += i;
            }
        }
        return no - div;
    }
};
