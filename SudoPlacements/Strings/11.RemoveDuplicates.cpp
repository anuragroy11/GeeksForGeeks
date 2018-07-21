#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    cin >> ws;
    
    while (t--) {
        string temp;
        vector<char> s;
        
        getline(cin, temp);
        
        for (auto c : temp) {
            if (find(s.begin(), s.end(), c) == s.end())
                s.push_back(c);
        }
        
        for (auto c : s)
            cout << c;
            
        cout << endl;
        
    }
    
    return 0;
}