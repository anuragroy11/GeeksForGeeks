#include <bits/stdc++.h>
using namespace std;

bool primeChecker(int n) {
    if ((n == 2) || (n == 3))
        return true;
    if ((n % 2 == 0) || (n % 3 == 0))
        return false;
        
    int i = 5, w = 2;
    
    while (i * i <= n) {
        if (n % i == 0)
            return false;
            
        i = i + w;
        w = 6 - w;
    }
    
    return true;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp, min, sum = 0;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            sum = sum + temp;
        }
        
        for (int i = sum; i < INT_MAX; i++) {
            if (primeChecker(i)) {
                min = i - sum;
                break;
            }
        }
        
        cout << min << endl;
        
        t--;
    }
    
    return 0;
}