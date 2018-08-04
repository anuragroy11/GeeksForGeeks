#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, temp, flag = 0;
        cin >> n;
        
        vector<int> a, b;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            b.push_back(temp);
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                flag = 1;
                break;
            }
        }
        
        if (flag == 1)
            cout << 0 << endl;
        else cout << 1 << endl;
    }
    
    return 0;
}