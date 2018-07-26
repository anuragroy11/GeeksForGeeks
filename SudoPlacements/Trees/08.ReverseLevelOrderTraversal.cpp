/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void reversePrint(Node *root) {
    queue<Node*> q;
    stack<int> s;
    
    Node* temp = root;
    
    if (root != nullptr)
        q.push(root);
        
    while (!q.empty()) {
        s.push(temp -> data);
        
        if (temp -> right != nullptr)
            q.push(temp -> right);
            
        if (temp -> left != nullptr)
            q.push(temp -> left);
            
        q.pop();
        temp = q.front();
    }
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}