#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, count = 0;
        char c;
        
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> c;
            if (c == '1')
                count++;
        }
        
        cout << count*(count - 1)/2 << endl;
    }
    
    return 0;
}