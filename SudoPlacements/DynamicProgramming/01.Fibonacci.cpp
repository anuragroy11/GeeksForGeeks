#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        unsigned long long int prev = 1, next = 1; 
        cin >> n;
        
        if (n == 1)
            cout << 1;
        else cout << 1 << " " << 1 << " ";
        
        for (int i =  2; i < n; i++) {
            
            cout << prev + next << " ";
            swap(prev, next);
            next = prev + next;
        }
        
        cout << endl;
    }
    
    return 0;
}