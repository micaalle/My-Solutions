class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            int n = sqrt(nums[i]);
            int cnt = 0, tmp = 0;
            for(int j = 1; j <= n; j++){

                if(nums[i] % j == 0){
                    if(j == nums[i] / j){
                        tmp += j;
                        cnt++;
                    } else {
                        tmp += (j + (nums[i] / j));
                        cnt += 2;
                    }
                }
                if(cnt > 4){
                    tmp = 0;
                    break;
                }
            }
            printf("%d \n", tmp);
            if(cnt == 4) ret += tmp;
        }
        return ret;
    }
};
