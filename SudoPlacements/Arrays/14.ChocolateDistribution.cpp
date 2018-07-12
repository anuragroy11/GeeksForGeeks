#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int k, n, temp, min = INT_MAX;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        cin >> k;
        
        sort(a.begin(), a.end());
        
        for (int i = 0; i + k - 1 < n; i++) {
            if (min > a[i+k-1] - a[i])
                min = a[i+k-1] - a[i];
        }
        
        cout << min << endl;
        t--;
    }
    
    return 0;
}