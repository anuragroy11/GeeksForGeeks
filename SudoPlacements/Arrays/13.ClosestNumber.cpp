#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int k, n, temp, out, min = INT_MAX;
        cin >> n;
        cin >> k;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (min >= abs(k - temp)) {
                min = abs(k - temp);
                out = temp;
            }
        }
        
        cout << out << endl;
        
        t--;
    }
    
    return 0;
}