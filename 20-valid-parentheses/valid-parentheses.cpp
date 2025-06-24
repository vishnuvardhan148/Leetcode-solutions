class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{') {
                ans.push(c);
            } else {
                if (ans.empty()) return false;
                char top = ans.top();
                ans.pop();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }
        return ans.empty();
    }
};
