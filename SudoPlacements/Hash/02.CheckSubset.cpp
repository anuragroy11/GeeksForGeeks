#include <bits/stdc++.h>
using namespace std;

bool checkSubset(vector<int> a, vector<int> b, int n) {
    for (int i  = 0; i < n; i++) {
        if (find(a.begin(), a.end(), b[i]) == a.end())
            return false;
    }
    
    return true;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int m, n, temp;
        vector<int> a, b;
        
        cin >> m >> n;
        
        for (int i = 0; i < m; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            b.push_back(temp);
        }
        
        if (checkSubset(a, b, n))
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}