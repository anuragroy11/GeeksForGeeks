/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void levelOrder(Node* root) {
    
    queue<Node*> q;
    
    Node* temp = root;
    
    if (root != nullptr)
        q.push(root);
        
    while (!q.empty()) {
        
        cout << temp -> data << " ";
        
        if (temp -> left != nullptr)
            q.push(temp -> left);
            
        if (temp -> right != nullptr)
            q.push(temp -> right);
            
        q.pop();
        temp = q.front();
    }
}
