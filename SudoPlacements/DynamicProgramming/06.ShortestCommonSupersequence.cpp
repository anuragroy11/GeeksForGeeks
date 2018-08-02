#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2) {
    vector<vector<int>> a(s1.length()+1, vector<int>(s2.length()+1, 1));
    
    for (int i = 0; i <= s1.length(); i++) {
        for (int j = 0; j <= s2.length(); j++) {
            if (i == 0 || j == 0)
                a[i][j] = 0;
        }
    }
    
    for (int i = 1; i <= s1.length(); i++) {
        for (int j  = 1; j <= s2.length(); j++) {
            if (s1[i-1] == s2[j-1])
                a[i][j] = a[i-1][j-1] + 1;
            else a[i][j] = max(a[i-1][j], a[i][j-1]);
        }
    }
    
    return a[s1.length()][s2.length()];
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        
        cout << (s1.length() + s2.length() - lcs(s1, s2)) << endl;
    }
    
    return 0;
}