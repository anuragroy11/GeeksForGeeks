#include <bits/stdc++.h>
using namespace std;

int str(char x) {
    if (x == 'I')
        return 1;
    else if (x == 'V')
        return 5;
    else if (x == 'X')
        return 10;
    else if (x == 'L')
        return 50;
    else if (x == 'C')
        return 100;
    else if (x == 'D')
        return 500;
    else if (x == 'M')
        return 1000;
        
}

int RomToInt (string s) {
    
    int sum = str(s[0]);
    
    for (int i = 1; i < s.size(); i++){
        if (str(s[i - 1]) >= str(s[i])){
            sum = sum + str(s[i]);
        }
            
        else {
            sum = sum - 2*str(s[i-1]) + str(s[i]);
        }
    }
    
    return sum;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        string temp;
        cin >> temp;
        
        cout << RomToInt(temp) << endl;
    }
    
    return 0;
}