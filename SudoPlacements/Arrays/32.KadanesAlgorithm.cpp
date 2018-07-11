#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp, max;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        max = INT_MIN;
        int sum = 0;
        
        for (auto i = a.begin(); i != a.end(); i++) {
            sum = sum + *i;
            
            if (max < sum)
                max = sum;
            if (sum < 0)
                sum = 0;    
        }
        
        cout << max << endl;
        
        t--;
    }
    
    return 0;
}