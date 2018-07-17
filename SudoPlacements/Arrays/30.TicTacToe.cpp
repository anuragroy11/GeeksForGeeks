#include <bits/stdc++.h>
using namespace std;

bool hasWon(char T[3][3], char a) {
    for (int i = 0; i < 3; i++) {
        if ((T[i][0] == a) && (T[i][1] == a) && (T[i][2] == a))
            return true;
        if ((T[0][i] == a) && (T[1][i] == a) && (T[2][i] == a))
            return true;
    }
    
    if ((T[0][0] == a) && (T[1][1] == a) && (T[2][2] == a))
        return true;
    if ((T[0][2] == a) && (T[1][1] == a) && (T[2][0] == a))
        return true;
    
    return false;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        int noX = 0, noO = 0;
        char temp;
        char a[3][3];
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j< 3; j++) {
                cin >> temp;
                if (temp == 'X')
                    noX++;
                else if (temp == 'O')
                    noO++;
                a[i][j] = temp;
            }
        }
        
        if (noO > noX)
            cout << "Invalid" << endl;
        else if (noO == noX) {
            if (hasWon(a, 'O'))
                cout << "Valid" << endl;
            else cout << "Invalid" << endl;
        } else if (noX - noO > 1)
            cout << "Invalid" << endl;
        else if (noX > noO) {
            if (hasWon(a, 'O'))
                cout << "Invalid" << endl;
            else cout << "Valid" << endl;
        }
    }
    
    return 0;
}