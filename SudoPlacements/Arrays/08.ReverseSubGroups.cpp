#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int k, n, temp;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        cin >> k;
        
        for (int i = 0; i < n; i = i + k) {
            if (i <= n - k)
                reverse(a.begin() + i, a.begin() + i + k);
            else reverse (a.begin() + i, a.end());
        }
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}