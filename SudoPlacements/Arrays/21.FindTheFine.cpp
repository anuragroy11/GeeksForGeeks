#include <bits/stdc++.h>
using namespace std;

bool isEven(int n) {
    if (n % 2 == 0)
        return true;
    else return false;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, d, temp, total = 0;
        
        cin >> n >> d;
        
        vector<int> a(n, 0);
        
        if (isEven(d)) {
            for (int i = 0; i < n; i++) {
                cin >> temp;
                if (!isEven(temp))
                    a[i] = 1;
            }
        } else {
            for (int i = 0; i < n; i++) {
                cin >> temp;
                if (isEven(temp))
                    a[i] = 1;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            total = total + temp*a[i];
        }
        
        cout << total << endl;
        
        t--;
    }
    
    return 0;
}