#include <bits/stdc++.h>
using namespace std;

bool hasAdjacentDuplicates (string x) {
    for (int i = 0; i < x.size() - 1; i++) {
        if (x[i] == x[i+1])
            return true;
    }
    
    return false;
}

void removeAdjacentDuplicates(string x) {
    
    int flag = 0;
    string y = "";
    y.push_back(x[0]);
    
    if (x[0] == x[1])
        flag = 1;
    
    for (int i = 1; i < x.size(); i++) {
        if (x[i] != x[i-1]) {
            if (flag == 1) {
                y.pop_back();
                y.push_back(x[i]);
                flag = 0;
            } else y.push_back(x[i]);
        } else {
            flag = 1;
        }
    }
    
    if ((flag == 1) && (!y.empty()))
        y.pop_back();
    
    if ((!y.empty()) && (hasAdjacentDuplicates(y)))
        removeAdjacentDuplicates(y);
    else cout << y << endl;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string temp;
        cin >> temp;
        
        if (temp.size() == 1)
            cout << temp << endl;
        else removeAdjacentDuplicates(temp);
    }
    
    return 0;
}