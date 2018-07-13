/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete below method */
void countDistinct(int A[], int k, int n) {
    
    int i = 0;
    int j = k - 1;
    
    while (j < n) {
        
        vector<int> v;
        for (int x = i; x <= j; x++) {
            if (find(v.begin(), v.end(), A[x]) == v.end()) {
                v.push_back(A[x]);
            }
        }
        
        cout << v.size() << " ";
        
        i++;
        j++; 
    }
}