#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int m, n, max = INT_MIN;
        string s1, s2;
        cin >> m >> n >> s1 >> s2;
        
        vector<vector<int>> a(m+1, vector<int>(n+1, 0));
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1[i-1] == s2[j-1])
                    a[i][j] = 1 + a[i-1][j-1];
                if (max < a[i][j])
                    max = a[i][j];
            }
        }
        
        cout << max << endl;
    }
    
    return 0;
}