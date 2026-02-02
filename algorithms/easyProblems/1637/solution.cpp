class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int ret = 0;
        vector<int> comp;
        for (int i = 0; i < points.size(); i++) {
            comp.push_back(points[i][0]);
        }

        sort(comp.begin(), comp.end());

        for (int i = 0; i < comp.size() - 1; i++) {
            if (comp[i + 1] - comp[i] > ret)
                ret = comp[i + 1] - comp[i];
        }
        return ret;
    }
};
