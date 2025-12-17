class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        std::vector<int> ret;
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot) ret.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == pivot) ret.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > pivot) ret.push_back(nums[i]);
        }

        return ret;
    }
};
