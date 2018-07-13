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
        
        int n, temp;
        vector<int> odd, even;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            
            if (isEven(temp)) {
                even.push_back(temp);
            } else odd.push_back(temp);
        }
        
        sort(odd.rbegin(), odd.rend());
        sort(even.begin(), even.end());
        
        for (auto c : odd)
            cout << c << " ";
            
        for (auto c : even)
            cout << c << " ";
            
        cout << endl;
        
        t--;
    }
    
    return 0;
}