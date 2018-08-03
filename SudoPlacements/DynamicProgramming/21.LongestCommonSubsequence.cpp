#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n) {
    vector<vector<int>> a(m+1, vector<int>(n+1, 1));
    
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                a[i][j] = 0;
        }
    }
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i-1] == s2[j-1])
                a[i][j] = a[i-1][j-1] + 1;
            else a[i][j] = max(a[i-1][j], a[i][j-1]);
        }
    }
    
    return a[m][n];
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s1, s2;
        int m, n;
        
        cin >> m >> n >> s1 >> s2;
        
        cout << lcs(s1, s2, m, n) << endl;
    }
    
    return 0;
}