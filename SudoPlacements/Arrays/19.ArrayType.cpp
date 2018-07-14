#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp, asc = 0, desc = 0;
        vector<int> a;
        cin >> n;
        
        cin >> temp;
        a.push_back(temp);
        
        for (int i = 1; i < n; i++) {
            cin >> temp;
            
            if (a[i-1] < temp)
                asc++;
            else if (a[i-1] > temp)
                desc++;
            
            a.push_back(temp);
        }
        
        cout << *max_element(a.begin(), a.end()) << " ";
        
        if (desc == 0)
            cout << 1 << endl;
        else if (asc == 0)
            cout << 2 << endl;
        else if (desc > asc)
            cout << 3 << endl;
        else if (asc > desc)
            cout << 4 << endl;
            
        t--;
    }
    
    return 0;
}