class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ret;
        for(int i = 0; i < boxes.length(); i++){
            int left = 0, right = boxes.length();
            int sum = 0;
            while(left < i){
                if(boxes[left] == '1') sum += i - left;
                left++;
            }
            while(right > i){
                if(boxes[right] == '1') sum += right - i;
                right--;
            }
            ret.push_back(sum);
        }
        return ret;
    }
};
