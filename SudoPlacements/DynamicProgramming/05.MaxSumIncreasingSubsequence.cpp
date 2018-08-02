using namespace std;

int max (int a, int b) {
    if (a > b)
        return a;
    else return b;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int n, temp;
        vector<int> a, b;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
            b.push_back(temp);
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[i] > a[j]) {
                    b[i] = max(b[i], a[i] + b[j]);
                }
            }
        }
        
        cout << *max_element(b.begin(), b.end()) << endl;
        
    }
    
    return 0;
}