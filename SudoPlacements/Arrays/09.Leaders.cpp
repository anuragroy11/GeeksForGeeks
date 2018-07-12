#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp;
        vector<int> a, b;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        int max = INT_MIN;
        
        for (auto it = a.rbegin(); it != a.rend(); it++) {
            if (*it > max) {
                b.push_back(*it);
                max = *it;
            }
        }
        
        for (auto it = b.rbegin(); it != b.rend(); it++) {
            
            cout << *it << " ";
        }
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}