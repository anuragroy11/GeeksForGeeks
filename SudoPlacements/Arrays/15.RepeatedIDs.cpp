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
            if (find(a.begin(), a.end(), temp) == a.end()) {
                a.push_back(temp);
                cout << temp << " ";
            }
        }
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}