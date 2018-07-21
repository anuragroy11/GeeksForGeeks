#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        
        string temp;
        cin >> temp;
        
        string s = "";
        
        for (auto c = temp.rbegin(); c != temp.rend(); c++) {
            if (*c != '.') {
                s.insert(s.begin(), *c);
            }
            else if (*c == '.') {
                s.push_back('.');
                cout << s;
                s = "";
            }
        }
        
        cout << s << endl;
    }
    
    return 0;
}