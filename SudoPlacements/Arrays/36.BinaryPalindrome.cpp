#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        int k, n;
        cin >> n;
        cin >> k;
        
        string s(n, '0');
        
        s[0] = '1';
        
        for (int i = 0; i + k < n; i = i + k)
            s[i + k] = '1';
            
        s[n - 1] = '1';
        
        for (int i = n - 1; i - k >= 0; i = i - k)
            s[i - k] = '1';
            
        cout << s << endl;
        
    }
    
    return 0;
}