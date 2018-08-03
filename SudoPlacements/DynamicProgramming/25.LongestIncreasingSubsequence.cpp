#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, temp;
        cin >> n;
        vector<int> a, b(n, 1);
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
            
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
               if (a[i] > a[j] && b[i] < b[j] + 1)
                b[i] = b[j] + 1;
            }
        }
        
        if (n == 0)
            cout << 0 << endl;
        else cout << *max_element(b.begin(), b.end()) << endl;
        
    }
    
    return 0;
}