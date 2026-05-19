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

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; ++i) parent[i] = i;

        for (int i = 0; i < edges.size(); i++) unionSets(edges[i][0], edges[i][1]);
    

        return find(source) == find(destination);
    }
};
