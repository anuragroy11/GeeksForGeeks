#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string exp) {

    stack<char> st;
    
    for (auto c : exp) {
        if (c == '{')
            st.push('}');
        else if (c == '[')
            st.push(']');
        else if (c == '(')
            st.push(')');
        else {
            if (st.empty() || st.top() != c)
                return false;
            st.pop();
        }
    }
    
    return st.empty();
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        string exp;
        cin >> exp;
        
        if (isBalanced(exp))
            cout << "balanced" << endl;
        else cout << "not balanced" << endl;
    }
    
    return 0;
}