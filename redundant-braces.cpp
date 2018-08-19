int Solution::braces(string A) {
    stack<char> st;
    for (auto& c : A) {
        if (c == ')') {
            char top = st.top();
            st.pop();
            int flag = 1;
 
            while (top != '(') {
                if (top == '+' || top == '-' || 
                    top == '*' || top == '/')
                    flag = 0;
                top = st.top();
                st.pop();
            }
            if (flag == 1)
                return 1;
        }
 
        else
            st.push(c);
    }
    return 0;
}
