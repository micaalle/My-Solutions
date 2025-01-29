// Utilize the Disjoint Set union to solve the problem


//Path compression 
int find(int * parent, int x){
    if(parent[x] != x){
        parent[x] = find(parent, parent[x]);
    }
    return parent[x];
}

// Function to preform Union of sets, using depth to attach the tree with the smaller depth to the larger
void union_sets(int * parent, int * depth, int x, int y){
    int rootX = find(parent, x);
    int rootY = find(parent, y);
    if(rootX != rootY){
        if(depth[rootX] > depth[rootY]){
            parent[rootY] = rootX;
        }
        else if(depth[rootX] < depth[rootY]){
            parent[rootX] = rootY;
        }
        else{
            parent[rootY] = rootX;
            depth[rootX]++;
        }
    }
}


//Iterates over all of the edges checking if nodes are connected, if two nodes have the same root they are redundant
int* findRedundantConnection(int** edges, int edgesSize, int* edgesColSize, int* returnSize) {
    int * parent = malloc(sizeof(int *) * (edgesSize + 1));
    int * depth = calloc(sizeof(int *), (edgesSize + 1));
    
    int * ret = malloc(sizeof(int *) * 2);
    *returnSize = 2;

    for(int i = 1; i <=edgesSize; i++){
        parent[i] = i;
    }

    for(int i = 0; i < edgesSize; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        if(find(parent, u) == find(parent, v)){
            ret[0] = u;
            ret[1] = v;
        }
        else{
            union_sets(parent, depth, u, v);
        }
    }
    return ret;
}
