/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

int findLongestConseqSubseq(int a[], int n) {
    
    int count = 0, max = 0;
    
    sort (a, a + n);
    
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] == a[i] + 1)
            count++;
        else if (a[i + 1] == a[i])
            count = count;
        else count = 0;
        
        if (max < count)
            max = count;
    }
    
    return max + 1;
}