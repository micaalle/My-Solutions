class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<int> stack;
        vector<int> ret(n, 0);

        int prev = 0;

        for (int i = 0; i < logs.size(); i++) {
            if (logs[i].contains("start")) {

                if (!stack.empty()) {
                    ret[stack.top()] += stoi(logs[i].substr(logs[i].rfind(':') + 1)) - prev;
                }

                stack.push(stoi(logs[i].substr(0, logs[i].find(':'))));
                prev = stoi(logs[i].substr(logs[i].rfind(':') + 1));
            } else {
                ret[stack.top()] += stoi(logs[i].substr(logs[i].rfind(':') + 1)) - prev + 1;
                stack.pop();
                prev = stoi(logs[i].substr(logs[i].rfind(':') + 1)) + 1;
            }
        }
        return ret;
    }
};
