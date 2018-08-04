#include <bits/stdc++.h>
using namespace std;

bool checkIsogram(string s) {
    string a = "";
    for (int i = 0; i < s.length(); i++) {
        if (a.find(s[i]) == string::npos)
            a.push_back(s[i]);
        else return false;
    }
    
    return true;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        if (checkIsogram(s))
            cout << 1 << endl;
        else cout << 0 << endl;
    }
    
    return 0;
}