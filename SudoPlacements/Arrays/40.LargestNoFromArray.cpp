#include <bits/stdc++.h>
using namespace std;

bool comparator(string x, string y) {
    string xy = x.append(y);
    string yx = y.append(x);
    
    return xy.compare(yx) > 0 ? true : false;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n; 
        string temp;
        vector<string> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        
        sort (a.begin(), a.end(), comparator);
        
        for (auto c : a)
            cout << c;
            
        cout << endl;
        
        t--;
    }
    
    return 0;
}