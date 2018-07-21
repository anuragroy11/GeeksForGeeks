/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

int maxlength( string s){
    int max = INT_MIN;
    int count = 0;
    
    for (auto c : s) {
        if (c == '1')
            count++;
        else count = 0;
        
        if (max < count)
            max = count;
    }
    
    return max;
}