#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i+1] < a[i])
                cout << a[i+1] << " ";
            else cout << -1 << " ";
        }
        
        cout << -1 << endl;
        
        t--;
    }
    
    return 0;
}