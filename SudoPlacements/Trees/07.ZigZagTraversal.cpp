/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
    int data;
    struct Node *left, *right;
};
*/
// your task is to complete this function 
// Function takes a single argument as input
// the root of the binary tree
// print a new line after each test case
void zigZagTraversal(Node* root) {
    
    stack<Node*> s1, s2;
    Node* temp;
    
    if (root != nullptr)
        s1.push(root);
        
    while (!s1.empty() || !s2.empty()) {
        while (!s1.empty()) {
            
            temp = s1.top();
            s1.pop();
            
            cout << temp -> data << " ";
            
            if (temp -> left != nullptr)
                s2.push(temp -> left);
                
            if (temp -> right != nullptr)
                s2.push(temp -> right);
        }
        
        while (!s2.empty()) {
            
            temp = s2.top();
            s2.pop();
            
            cout << temp -> data << " ";
            
            if (temp -> right != nullptr)
                s1.push(temp -> right);
                
            if (temp -> left != nullptr)
                s1.push(temp -> left);
        }
    }
    
    cout << endl;
}