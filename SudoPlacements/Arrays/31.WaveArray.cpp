#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        int n, temp;
        cin >> n;
        
        vector<int> a;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        sort (a.begin(), a.end());
        
        for (int i = 1; i < n; i = i + 2) {
            temp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = temp;
        }
        
        for (auto x : a) 
            cout << x << " ";
        
        cout << endl;
    }
    
    return 0;
}