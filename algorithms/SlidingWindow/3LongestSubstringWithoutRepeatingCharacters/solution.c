int lengthOfLongestSubstring(char* s) {
    int left = 0, right = 0, ret = 0;
    int * hash = calloc(128, sizeof(int)); 

    while (s[right]) {
        int idx = s[right];
        hash[idx]++;

        while (hash[idx] > 1) {
            hash[s[left]]--;
            left++;
        }

        int winLen = right - left + 1;
        if (winLen > ret) {
            ret = winLen;
        }

        right++;
    }
    return ret;
}
