/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
int atoi(string s){
    int num = 0, sign = 1;
    
    if (s[0] == '-') {
        s.erase(s.begin());
        sign = -1;
    }
    int unit = 1;
    
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        if ((*it >= '0') && (*it <= '9')) {
            num = num + (*it - '0')*unit;
            unit = unit * 10;
        } else return -1;
    }
    
    return num*sign;
        
}