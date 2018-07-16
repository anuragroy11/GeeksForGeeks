#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int k, n, temp;
        vector<int> a;
        cin >> n >> k;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        for (int i = 0; i <= n - k; i++) {
            cout << *max_element(a.begin() + i, a.begin() + i + k) << " ";
        }
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}