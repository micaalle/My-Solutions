class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int hash[51] = {0};
        vector<int> ret;
        int cnt = 0;
        for(int i = 0; i < A.size(); i++){
            hash[A[i]]++;
            hash[B[i]]++;
            if(A[i] == B[i]){
                cnt++;
            } else{
                if(hash[A[i]] == 2) cnt++;
                if(hash[B[i]] == 2) cnt++; 
            }
            ret.push_back(cnt);
        }
        return ret;
    }
};
