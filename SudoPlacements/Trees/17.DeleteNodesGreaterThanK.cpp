/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The node structure
struct Node {
int data;
Node * right, * left;
};*/
/*The function should return the root of the modified tree*/
Node* deleteNode(Node* root, int key) {
    
    if (root -> data == key)
        return root -> left;
    else if (root -> data > key)
        return deleteNode(root -> left, key);
    else if (root -> data < key) {
        root -> right = deleteNode(root -> right, key);
        return root;
    }
}
