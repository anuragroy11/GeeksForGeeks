#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> keypad = {
        {}, 
        {}, 
        {"a", "b", "c"}, 
        {"d", "e", "f"}, 
        {"g", "h", "i"},
        {"j", "k", "l"},
        {"m", "n", "o"},
        {"p", "q", "r", "s"},
        {"t", "u", "v"},
        {"w", "x", "y", "z"}
};

void generator(vector<int> a, string s, int n) {
    if (n == a.size()) {
        cout << s << " ";
        return;
    } 
    
    for (int j = 0; j < keypad[a[n]].size(); j++) {
        s += keypad[a[n]][j];
        generator(a, s, n + 1);
        s.pop_back();
    }
    
}

int main() {
    
    int t;
    
    vector<vector<string>> keypad = {
        {}, 
        {}, 
        {"a", "b", "c"}, 
        {"d", "e", "f"}, 
        {"g", "h", "i"},
        {"j", "k", "l"},
        {"m", "n", "o"},
        {"p", "q", "r", "s"},
        {"t", "u", "v"},
        {"w", "x", "y", "z"}
    };
    
    cin >> t;
    
    while (t) {
        
        int n, temp;
        vector<int> a;
        vector<string> output;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        generator(a, "", 0);
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}