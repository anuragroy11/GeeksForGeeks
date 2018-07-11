#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp, search, flag = 0;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        cin >> search;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == search) {
                temp = i;
                flag = 1;
                break;
            }
        }
        
        if (flag == 1)
            cout << temp << endl;
        else if (flag == 0) 
            cout << -1 << endl;
        
        t--;
    }
    
    return 0;
}