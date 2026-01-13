class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> stack;
        std::vector<string> ret;
        int cnt = 2;
        stack.push(1);
        ret.push_back("Push");
        if(target[0] != 1){
            ret.push_back("Pop");
        }
        for(int i = 0; i < target.size(); i++){
            while(stack.top() != target[i]){
                if(stack.top() < target[i]){
                    stack.push(cnt);
                    ret.push_back("Push");
                    cnt++;
                }
                if(stack.top() != target[i]){
                    stack.pop();
                    ret.push_back("Pop");
                }
            }
        }
        return ret;
    }
};
