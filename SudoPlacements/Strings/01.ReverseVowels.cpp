using namespace std;

bool isVowel(char x) {
    if ((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'))
        return true;
    else return false;
}

string reverseVowels(string x) {
    stack<char> st;
    
    for (auto c : x) {
        if (isVowel(c))
            st.push(c);
    }
    
    if (st.empty())
        return x;
        
    for (auto it = x.begin(); it != x.end(); it++) {
        if (isVowel(*it)) {
            *it = st.top();
            st.pop();
        }
    }
    
    return x;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        string temp;
        
        cin >> temp;
        cout << reverseVowels(temp) << endl;
        
        t--;
    }
    
    return 0;
}