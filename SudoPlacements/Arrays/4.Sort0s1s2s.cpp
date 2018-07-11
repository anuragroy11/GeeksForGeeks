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
        
        sort(a.begin(), a.end());
        
        for (auto it = a.begin(); it != a.end(); it++) {
            cout << *it << " ";
        }
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}
