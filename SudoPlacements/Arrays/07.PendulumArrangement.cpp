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
        
        sort(a.begin(), a.end());
        
        b.push_back(*a.begin());
        
        for (int i = 1; i < n; i++) {
            if (i%2 != 0)
                b.push_back(a[i]);
            else if (i%2 == 0)
                b.insert(b.begin(), a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}