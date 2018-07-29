/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node class
struct Node
{
    int data; 
    Node *left, *right; 
}; */
// Method that prints the bottom view.
void bottomView(Node *root) {
    if (root == nullptr)
        return;
        
    map<int, int> m;
    queue<pair<Node*, int>> q;
    
    int hd = 0;
    q.push(make_pair(root,hd));
    
    while(!q.empty()) { 
        Node* cur = q.front().first;
        hd = q.front().second;
        m[hd] = cur -> data;
        if (cur -> left != nullptr)
            q.push(make_pair(cur -> left, hd - 1));
        if(cur -> right != nullptr)
            q.push(make_pair(cur -> right, hd + 1));
            q.pop();
        
    }
    for(auto it : m) {
        cout << it.second << " ";
        
    }
    
}
