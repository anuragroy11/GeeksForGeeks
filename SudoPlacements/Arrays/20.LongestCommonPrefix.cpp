#include <bits/stdc++.h>
using namespace std;

string lcp(string x, string y) {
    string temp = "";
    
    auto itx = x.begin();
    auto ity = y.begin();
    
    while ((*itx == *ity) && (itx != x.end()) && (ity != y.end())) {
        temp += *itx;
        itx++;
        ity++;
    }
    
    return temp;
    
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        int n;
        string temp, out;
        cin >> n;
        
        cin >> out;
        
        for (int i = 1; i < n; i++) {
            cin >> temp;
            out = lcp(out, temp);
            
        }
        
        if (out == "")
            cout << -1 << endl;
        else cout << out << endl;
        
    }
    
    return 0;
}