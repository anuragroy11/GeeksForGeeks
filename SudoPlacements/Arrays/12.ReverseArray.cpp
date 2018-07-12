#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp;
        cin >> n;
        vector<int> a(n);
        
        
        for (int i = n - 1; i >= 0; i--) {
            cin >> temp;
            a[i] = temp;
        }
        
        for (auto c : a)
            cout << c << " ";
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}