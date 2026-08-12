class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> matchingBracket = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        for (char c : s) {
            if (matchingBracket.find(c) != matchingBracket.end()) {
                if (st.empty() || st.top() != matchingBracket[c]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(c);
            }
        }
        
        return st.empty();
    }
};