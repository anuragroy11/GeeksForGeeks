#include <bits/stdc++.h>
using namespace std;

bool absdif(int n) {
    string x = to_string(n);
    
    for (int i = 0; i < x.length() - 1; i++) {
        int d = x.at(i) - x.at(i + 1);
        if (abs(d) != 1)
            return false;
    }
    
    return true;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int k, n, temp;
        vector<int> a;
        cin >> n;
        cin >> k;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if ((temp < k) && absdif(temp))
                a.push_back(temp);
        }
        
        if (a.size() == 0)
            cout << -1;
        else {
            for (auto c : a)
            cout << c << " ";
        }
            
        cout << endl;
        
        t--;
    }
    
    return 0;
}