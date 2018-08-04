#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, max = 1;
        string temp;
        map<string, int> m;
        
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (m.find(temp) == m.end())
                m.insert(make_pair(temp, 1));
            else {
                auto it = m.find(temp);
                it -> second = (it -> second) + 1;
                if (max < it -> second)
                    max = it -> second;
            }
        }
        
        for (auto i = m.begin(); i != m.end(); i++) {
            if (i -> second == max) {
                temp = i -> first;
                break;
            }
        }
        
        cout << temp << endl;
        
    }
    
    return 0;
}