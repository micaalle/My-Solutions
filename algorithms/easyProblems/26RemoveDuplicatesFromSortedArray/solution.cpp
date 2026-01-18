class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int hash[201];
        int ret = 0;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i] + 100]++;
        }
        int cnt = 0;
        for(int i = 0; i < 201; i++){
            if(hash[i] > 0){
                nums[cnt++] = i - 100;
                ret++;
            }
        }
        printf("%d", ret);
        return ret;
    }
};
