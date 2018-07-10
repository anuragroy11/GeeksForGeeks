#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        if (n == 1)
            cout << "1" << endl;
        else {
            int flag = 0, k;
            for (k = 1; k < n; k++) {
                int sum1 = 0, sum2 = 0;
                
                for (int i = 0; i < k; i++)
                    sum1 = sum1 + a[i];
                    
                for (int i = k + 1; i < n; i++)
                    sum2 = sum2 + a[i];
                    
                if (sum1 == sum2) {
                    flag = 1;
                    break;
                }
            }
            
            if (flag == 1)
                cout << k + 1 << endl;
            else cout << "-1" << endl;
        }
        
        t--;
    }
    
    return 0;
}
