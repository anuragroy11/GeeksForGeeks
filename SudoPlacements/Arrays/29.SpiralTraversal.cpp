#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int temp;
        
        vector<vector<int>> a(4, vector<int>(4));
        
        for (int i = 0; i < 4; i++) {
            for( int j = 0; j < 4; j++) {
                cin >> temp;
                a[i][j] = temp;
            }
        }
        
        for (int i = 0; i < 4; i++) {
            cout << a[0][i] << " ";
        }
        
        for (int i = 1; i < 3; i++) {
            cout << a[i][3] << " ";
        }
        
        for (int i = 3; i >= 0; i--) {
            cout << a[3][i] << " ";
        }
        
        for (int i = 2; i >= 1; i--) {
            cout << a[i][0] << " ";
        }
        
        cout << a[1][1] << " " << a[1][2] << " " << a[2][2] << " " << a[2][1];
        
        cout << endl;
        
        t--;
    }
    
    return 0;
}