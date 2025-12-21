class Solution {
public:
    bool isCircularSentence(string sentence) {
        stack<char> ret;
        ret.push(sentence[0]);
        for(int i = 1; i < sentence.length(); i++){
            if(sentence[i] == ' '){
                ret.push(sentence[i - 1]);
            }
            else if(sentence[i - 1] == ' '){
                if(ret.top() != sentence[i]){
                    return false;
                } else {
                    ret.pop();
                }
            }
        }
        if(sentence[0] != sentence[sentence.length() - 1]) return false;
        return true;
    }
};
