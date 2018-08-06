#include <bits/stdc++.h>
using namespace std;

int shortestPath(int v) {
    if (v == 1)
        return 0;
    else if (v <= 3)
        return 1;
    vector<int> a(v+1, 0);
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;
    
    for (int i = 4; i <= v; i++) {
        if (i % 3 == 0)
            a[i] = min(a[i/3] + 1, a[i-1] + 1);
        else a[i] = a[i-1] + 1;
    }
    
    return a[v];
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int v;
        cin >> v;
        
        cout << shortestPath(v) << endl;
    }
    
    return 0;
}