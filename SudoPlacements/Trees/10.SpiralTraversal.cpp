/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void printSpiral(Node *root) {
    stack<Node*> s1, s2;
    Node* temp;
    
    if (root != nullptr)
        s1.push(root);
    
    while (!s1.empty() || !s2.empty()) {
        while (!s1.empty()) {
            temp = s1.top();
            s1.pop();
            
            cout << temp -> data << " ";
            
            if (temp -> right != nullptr)
                s2.push(temp -> right);
            
            if (temp -> left != nullptr)
                s2.push(temp -> left);
        }
        
        while(!s2.empty()) {
            temp = s2.top();
            s2.pop();
            
            cout << temp -> data << " ";
            
            if (temp -> left != nullptr)
                s1.push(temp -> left);
            
            if (temp -> right != nullptr)
                s1.push(temp -> right);
        }
    }
}