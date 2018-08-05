#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        char x = '0';
        
        for (auto c : s1) {
            if (s2.find(c) != string::npos) {
                x = c;
                break;
            }
        }
        
        if (x == '0')
            cout << "No character present" << endl;
        else cout << x << endl;
    }
    
    return 0;
}