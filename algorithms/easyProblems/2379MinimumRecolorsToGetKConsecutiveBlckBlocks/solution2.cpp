class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        if(blocks.length() < k) return 0;
        
        int tmp = 0;

        for(int i = 0; i < k; i++){
            if(blocks[i] == 'W'){
                tmp++;
            }
        }

        int ret = tmp;
        int right = k;
        int left = 0;

        while(right != blocks.length()){
            if(tmp < ret) ret = tmp;
            if(blocks[right] == 'W'){
                tmp++;
            }
            if(blocks[left] == 'W'){
                tmp--;
            }
            left++;
            right++;
            if(tmp < ret) ret = tmp;
        }
        return ret;
    }

};
