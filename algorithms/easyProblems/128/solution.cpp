class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int i) {
        if (i == parent[i])
            return i;

        return parent[i] = find(parent[i]);
    }

    void unionSets(int x, int y) {
        int xRoot = find(x);
        int yRoot = find(y);

        if (xRoot == yRoot)
            return;

        if (rank[xRoot] < rank[yRoot]) {
            parent[xRoot] = yRoot;
        } else if (rank[yRoot] < rank[xRoot]) {
            parent[yRoot] = xRoot;
        } else {
            parent[yRoot] = xRoot;
            rank[xRoot]++;
        }
    }

    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(), ret = 1;
        if (n == 0) return 0;
        
        unordered_map<int, int> mp;

        parent.resize(n);
        rank.resize(n, 0);

        for(int i = 0; i < n; i++){
            parent[i] = i;
        }

        for(int i = 0; i < n; i++){
            if (mp.count(nums[i])) continue;

            mp[nums[i]] = i;

            if(mp.count(nums[i] - 1)) unionSets(i, mp[nums[i] - 1]);

            if(mp.count(nums[i] + 1)) unionSets(i, mp[nums[i] + 1]);
        }

        unordered_map<int, int> size;

        for(int i = 0; i < n; i++){
            if(!mp.count(nums[i]) || mp[nums[i]] != i) continue;

            size[find(i)]++;

            ret = max(ret, size[find(i)]);
        }

        return ret;
    }
};
