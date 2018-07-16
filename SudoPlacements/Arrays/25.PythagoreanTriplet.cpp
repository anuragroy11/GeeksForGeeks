#include <bits/stdc++.h>
using namespace std;

void pythagoreanTriplet(vector<int> a) {
    
    int i = a.size() - 1;
    
    for (i; i > 1; i--) {
        int j = 0;
        int k = i - 1;
        while (j < k) {
            if (a[i] == a[j] + a[k]) {
                cout << "Yes" << endl;
                return;
            } else if (a[i] > a[j] + a[k])
                j++;
            else k--;
        }
    }
    
    cout << "No" << endl;
}

int main() {
    
    int t;
    
    cin >> t;
    
    while (t) {
        
        int n, temp;
        vector<int> a;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp*temp);
        }
        
        sort(a.begin(), a.end());
        
        pythagoreanTriplet(a);
        
        t--;
    }
    
    return 0;
}