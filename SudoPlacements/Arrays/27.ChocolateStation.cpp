#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int c, n, temp, max = -1;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (max < temp)
                max = temp;
        }
        
        cin >> c;
        cout << c*max << endl;
    }
    
    return 0;
}