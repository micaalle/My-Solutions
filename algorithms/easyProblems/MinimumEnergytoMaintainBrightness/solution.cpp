class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        
        long long ret = 0;

        sort(intervals.begin(), intervals.end());

        long long st = intervals[0][0];
        
        long long fin = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            
            if (intervals[i][0] <= fin + 1) {

                //long long tmp = intervals[i][1];
                
                fin = max(fin, (long long)intervals[i][1]);
            } else {
                ret += fin - st + 1;
                fin = intervals[i][1];
                st = intervals[i][0];
            }
        }
        ret += fin - st + 1;
        return ret * ((brightness + 2LL) / 3);
    }
};
