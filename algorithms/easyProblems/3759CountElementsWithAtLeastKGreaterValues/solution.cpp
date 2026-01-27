class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int ct=upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            if(n-ct>=k) ans++;
        }
        return ans;
    }
};
