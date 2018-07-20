#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp, sum = 0;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        vector<int> dpleft(n), dpright(n);
        
        for (int i = 0; i < n; i++) {
            dpleft[i] = *max_element(a.begin(), a.begin() + i);
            dpright[i] = *max_element(a.begin() + i, a.end());
        }
        
        for (int i = 1; i < n - 1; i++) {
            int x = max(min(dpleft[i], dpright[i]) - a[i], 0);
            sum = sum + x;
        }
        
        cout << sum << endl;
        
        t--;
    }
    
    return 0;
}