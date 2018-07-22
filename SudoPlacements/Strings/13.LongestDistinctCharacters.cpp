#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string temp;
        cin >> temp;
        
        int max = 0;
        
        for (int i = 0; i < temp.size(); i++) {
            int count = 1;
            string s = "";
            s.push_back(temp[i]);
            int j = i + 1;
            while (j < temp.size()) {
                if (find(s.begin(), s.end(), temp[j]) == s.end()) {
                    count++;
                    if (max < count)
                        max = count;
                    s.push_back(temp[j]);
                } else {
                    if (max < count)
                        max = count;
                    break;
                }
                
                j++;
            }
        }
        
        cout << max << endl;
    }
    
    return 0;
}