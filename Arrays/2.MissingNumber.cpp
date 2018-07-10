#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n - 1; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        sort(a.begin(), a.end());
        
        for (int j = 0; j < n; j++) {
            if (a[j] != j + 1) {
                temp = j + 1;
                break;
            }
        }
        
        cout << temp << endl;
        
        t--;
    }
    
    return 0;
}