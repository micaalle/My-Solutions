class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int hash[101] = {0};
        int hash2[101] = {0};
        vector<int> ret;
        for(int i = 0; i < nums2.size(); i++){
            hash[nums2[i]]++;
        }
        for(int i = 0; i < nums1.size(); i++){
            hash2[nums1[i]]++;
        }
        int tmp = 0;
        for(int i = 0; i < nums1.size(); i++){
            if(hash[nums1[i]] != 0) tmp++;
        }
        ret.push_back(tmp);
        tmp = 0;
        for(int i = 0; i < nums2.size(); i++){
            if(hash2[nums2[i]] != 0) tmp++;
        }
        ret.push_back(tmp);
        return ret;
    }
};
