#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    while (t--){
        
        string a, b;
        cin >> a >> b;
        
        if(a.length() == b.length() && (a+a).find(b) != string::npos) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}