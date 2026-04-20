class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int left = 0;
        int right = colors.size() - 1;

        while (left < right) {
            if (colors[left] != colors[right]) {
                return abs(left - right);
            }
            if (colors[left] == colors[right]) {
                int tmp = colors[left];
                int tmp1 = left;
                while (colors[left] == colors[right]) {
                    left++;
                }
                int val = abs(left - right);
                while (colors[tmp1] == colors[right]) {
                    right--;
                }
                return abs(tmp1 - right) > val ? abs(tmp1 - right) : val;
            }
        }
        return 0;
    }
};
