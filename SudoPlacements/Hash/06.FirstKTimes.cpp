#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, temp;
        cin >> n >> k;
        vector<int> a;
        unordered_map<int, int> m;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
            
            if (m.find(temp) == m.end())
                m[temp] = 1;
            else m[temp]++;
        }
        
        for (int i = 0; i < n; i++) {
            temp = a[i];
            if (m[temp] == k)
                break;
                
            temp = -1;
        }
        
        cout << temp << endl;
    }
    
    return 0;
}