#include <bits/stdc++.h>
using namespace std;

bool isomorphic(string x, string y) {
    map<char, char> m;
    
    for (int i = 0; i < x.size(); i++) {
        if (m.find(x[i]) != m.end()) {
            auto c = m.find(x[i]);
            if (c -> second != y[i])
                return false;
        } else {
            m.insert(make_pair(x[i], y[i]));
        }
    }
    
    return true;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string temp1, temp2;
        cin >> temp1 >> temp2;
        
        if (!(isomorphic(temp1, temp2)) || !(isomorphic(temp2, temp1)))
            cout << 0 << endl;
        else cout << 1 << endl;
    }
    
    return 0;
}