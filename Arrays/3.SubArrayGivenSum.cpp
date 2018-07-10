#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp, sum;
        vector<int> a;
        cin >> n;
        cin >> sum;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        int count = 0, s = 0, flag = 0;
        int si = 0, se;
        for (int j = 0; j < n; j++) {
            s = s + a[j];
            count++;
            if (s > sum) {
                s = 0;
                j = j - count + 1;
                count = 0;
                si = j + 1;
            }
            if (s == sum) {
                flag = 0;
                se = j;
                break;
            } else flag = 1;
        }
        
        if (flag == 0)
            cout << si + 1 << " " << se + 1 << endl;
        else if (flag == 1)
            cout << "-1" << endl;
        
        t--;
    }
    
    return 0;
}
