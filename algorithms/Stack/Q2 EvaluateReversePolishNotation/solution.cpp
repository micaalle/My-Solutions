class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;

        for (int i = 0; i < tokens.size(); i++) {
            if (isdigit(tokens[i][0]) ||
                (tokens[i][0] == '-' && tokens[i].size() > 1)) {
                stack.push(stoi(tokens[i]));
            } else if (tokens[i][0] == '+') {
                int tmp = stack.top();
                stack.pop();
                int tmp2 = stack.top();
                stack.pop();

                stack.push(tmp + tmp2);
            } else if (tokens[i][0] == '-') {
                int tmp = stack.top();
                stack.pop();
                int tmp2 = stack.top();
                stack.pop();

                stack.push(tmp2 - tmp);
            } else if (tokens[i][0] == '/') {
                int tmp = stack.top();
                stack.pop();
                int tmp2 = stack.top();
                stack.pop();

                stack.push(tmp2 / tmp);
            } else if (tokens[i][0] == '*') {
                int tmp = stack.top();
                stack.pop();
                int tmp2 = stack.top();
                stack.pop();

                stack.push(tmp2 * tmp);
            }
        }
        return stack.top();
    }
};
