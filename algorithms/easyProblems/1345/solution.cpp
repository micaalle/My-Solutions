class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        vector<int> visit(arr.size(), 0);

        map<int, vector<int>> mp;

        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]].push_back(i);
        }

        queue<int> q;
        q.push(0);

        int cnt = 0;

        while(!q.empty()){
            int tmp = q.size();

            while(tmp--){
                int idx = q.front();
                q.pop();

                if(idx == arr.size() - 1) return cnt;

                if(idx - 1 >= 0 && visit[idx - 1] == 0) { 
                    q.push(idx - 1);
                    visit[idx - 1] = 1;
                }
                if(idx + 1 < arr.size() && visit[idx + 1] == 0) { 
                    q.push(idx + 1);
                    visit[idx + 1] = 1;
                    
                }

                for(auto x : mp[arr[idx]]){
                    if(visit[x] == 0){
                        q.push(x);
                        visit[x] = 1;
                    }
                }
                mp[arr[idx]].clear();
            }
            cnt++;
        }
        return -1;
    }
};
