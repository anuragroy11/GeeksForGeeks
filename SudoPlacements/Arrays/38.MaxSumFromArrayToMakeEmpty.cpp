#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        int n, temp, sum = 0;
        vector<int> a(21, 0);
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a[temp]++;
        }
        
        for (int i = 20; i > 0; i--) {
            if (a[i-1] <= a[i])
                a[i-1] = 0;
            else a[i-1] = a[i-1] - a[i];
        }
        
        for (int i = 1; i < 21; i++)
            sum = sum + a[i]*i;
            
        cout << sum << endl;
        
    }
    
    return 0;
}