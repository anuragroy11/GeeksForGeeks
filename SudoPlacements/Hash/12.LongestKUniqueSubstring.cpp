#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        int k, x, max = -1;
        
        cin >> s >> k;
        
        for (int i = 0; i < s.length(); i++) {
            vector<int> c(26, 0);
            int count = 0, lenCount = 0;
            
            for (int j = i; j < s.length(); j++) {
                x = s[j] - 97;
                if (c[x] == 0) {
                    count++;
                    c[x]++;
                    if (count > k)
                        break;
                }
                lenCount++;
            }
            
            if (count >= k) {
                if (max < lenCount)
                    max = lenCount;
            }
        }
        
        if (max == -1)
            cout << -1 << endl;
        else cout << max << endl;
    }
    
    return 0;
}