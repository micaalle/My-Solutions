class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ret = 0;
        int i = 0, j = 0;
        while (j < nums2.size() && i < nums1.size()) {
            if (nums1[i] <= nums2[j]) {
                if (j - i > ret) ret = j - i;
                j++;
            } else{
                i++;
            }
        }
        return ret;
    }
};
