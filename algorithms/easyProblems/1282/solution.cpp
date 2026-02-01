class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> hash;
        vector<vector<int>> ret;

        for(int i = 0; i < groupSizes.size(); i++){
            int sz = groupSizes[i];

            hash[sz].push_back(i);

            if(hash[sz].size() == sz){
                ret.push_back(hash[sz]);
                hash[sz].clear();
            }
        }

        return ret;
    }
};
