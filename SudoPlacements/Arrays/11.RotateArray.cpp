#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int d, n, temp;
        vector<int> a;
        cin >> n;
        cin >> d;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        while (d) {
        
            a.push_back(*a.begin());
            a.erase(a.begin());
            d--;
        }
    
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        
        cout << endl;
    
        t--;
    }
    
    return 0;
}