/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The function returns 1 if 
IP string is valid else return 0 
You are required to complete this method */
int isValid(char *ip) {
    string x = ip;
    
    int dots = 0;
    for (auto c : x) {
        if (c == '.')
            dots++;
        else if (!isdigit(c))
            return 0;
    }
    
    if (dots != 3)
        return 0;
        
    vector<string> parts(4, "");
    int j = 0;
    
    for (int i = 0; i < x.size(); i++) {
        if (x[i] != '.')
            parts[j].push_back(x[i]);
        else if (x[i] == '.')
            j++;
    }
    
    for (auto p : parts) {
        if (p.empty())
            return 0;
        if ((p.size() > 1) && (p[0] == '0'))
            return 0;
        if ((stoi(p) < 0) || (stoi(p) > 255))
            return 0;
    }
    
    return 1;
}