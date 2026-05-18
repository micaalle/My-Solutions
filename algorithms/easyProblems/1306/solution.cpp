class Solution {
public:

    bool dfs(vector<int>& visit, int start, vector<int>& arr){
        if(start < 0 || start >= arr.size() || visit[start]) return false;

        if(arr[start] == 0) return true;
        visit[start] = 1;

        return dfs(visit, start + arr[start], arr) || dfs(visit, start - arr[start], arr);
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<int> visit(arr.size(), 0);
        
        return dfs(visit, start, arr);
    }
};
