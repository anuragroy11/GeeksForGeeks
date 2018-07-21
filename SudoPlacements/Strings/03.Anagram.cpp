#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        string x, y;
        
        cin >> x >> y;
        
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        
        if (x.compare(y) == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
        
        t--;
    }
    
    return 0;
}