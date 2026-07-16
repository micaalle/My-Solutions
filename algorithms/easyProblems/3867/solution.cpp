class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        long long ret = 0;
        int max = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(max < nums[i]) max = nums[i];
            
            prefixGcd.push_back(gcd(nums[i], max));
        }   
        sort(prefixGcd.begin(), prefixGcd.end());
        int n = prefixGcd.size();

        int left = 0, right = n - 1;
        while(right > left){
            ret += gcd(prefixGcd[right], prefixGcd[left]);
            right--;
            left++;
        }
        return ret;
    }
};
