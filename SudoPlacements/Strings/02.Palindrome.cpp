#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        int n;
        string temp;
        
        cin >> n;
        cin >> temp;
        
        if (temp == string(temp.rbegin(), temp.rend()))
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}