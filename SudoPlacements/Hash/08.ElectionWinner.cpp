#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, max = 1;
        string temp;
        map<string, int> m;
        
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            
            if (m.find(temp) == m.end())
                m[temp] = 1;
            else {
                m[temp]++;
                if (max < m[temp])
                    max = m[temp];
            }
        }
        
        for (auto i = m.begin(); i != m.end(); i++) {
            if (i -> second == max) {
                temp = i -> first;
                break;
            }
        }
        
        cout << temp << " " << max << endl;
    }
    
    return 0;
}