class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int ret = 0, tmp = 0, chk = 0;

        for (int i = 0; i < rectangles.size(); i++) {
            chk = std::min(rectangles[i][0], rectangles[i][1]);
            if (chk > tmp) {
                tmp = chk;
                ret = 1;
            } else if (chk == tmp) {
                ret++;
            }
        }
        return ret;
    }
};
