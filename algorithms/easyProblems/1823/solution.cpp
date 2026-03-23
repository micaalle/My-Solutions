class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ret;
        int size = n;
        for(int i = 0; i < n; i++){
            ret.push_back(i + 1);
        }
        int val = 0;

        while(size > 1){
            ret.erase(ret.begin() + ((val + k) - 1) % size);
            val = ((val + k) - 1) % size;
            
            size--;
            if(val == size) val = 0;
            
        }
        return ret[0];
    }
};
