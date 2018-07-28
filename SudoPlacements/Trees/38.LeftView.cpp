/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void leftView(Node *root) {
    Node* temp = root;
    queue<Node*> q;
    
    if (temp == nullptr)
        return;
    q.push(temp);
    cout << temp -> data << " ";
    q.push(nullptr);
    
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp == nullptr) {
            if (!q.empty()) {
                temp = q.front();
                cout << temp -> data << " ";
                q.push(nullptr);
            }
        } else {
            if (temp -> left != nullptr)
                q.push(temp -> left);
            if (temp -> right != nullptr)
                q.push(temp -> right);
        }
    }
}