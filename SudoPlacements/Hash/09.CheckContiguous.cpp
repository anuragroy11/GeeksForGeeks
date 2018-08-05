#include <bits/stdc++.h>
using namespace std;

bool isContiguous(vector<int> a) {
    int min = *min_element(a.begin(), a.end());
    int max = *max_element(a.begin(), a.end());
    
    for (int i = min; i <= max; i++) {
        if (find(a.begin(), a.end(), i) == a.end())
            return false;
    }
    
    return true;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
            cin >> a[i];
            
        if (isContiguous(a))
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}