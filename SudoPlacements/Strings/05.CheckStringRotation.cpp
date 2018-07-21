#include <bits/stdc++.h>
using namespace std;

string rotateC(string x) {
    x.push_back(*x.begin());
    x.push_back(*(x.begin()+1));
    
    x.erase(x.begin());
    x.erase(x.begin());
    
    return x;
}

string rotateAC(string x) {
    x.insert(x.begin(), *x.rbegin());
    x.insert(x.begin(), *(x.rbegin()+1));
    
    x.pop_back();
    x.pop_back();
    
    return x;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        string s, t1, t2;
        cin >> s;
        t1 = rotateC(s);
        t2 = rotateAC(s);
        
        cin >> s;
        
        if ((s.compare(t1) == 0) || (s.compare(t2) == 0))
            cout << 1 << endl;
        else cout << 0 << endl;
    }
    
    return 0;
}