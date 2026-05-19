class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int i) {
        if (i == parent[i]) return i;

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

    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n = source.size(), ret = 0;

        unordered_map<int, unordered_map<int, int>> graph;
        parent.resize(n);
        rank.resize(n, 0);

        for(int i = 0; i < n; i++){
            parent[i] = i;
        }

        for(int i = 0; i < allowedSwaps.size(); i++){
            unionSets(allowedSwaps[i][0], allowedSwaps[i][1]);
        }

        for(int i = 0; i < n; i++){
            graph[find(i)][source[i]]++;
        }

        for(int i = 0; i < n; i++){
            int tmp = find(i);
            (graph[tmp][target[i]] > 0) ? graph[tmp][target[i]]-- : ret++;
        }
        return ret;
    }
};
