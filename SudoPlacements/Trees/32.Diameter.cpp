/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

int height(Node* root) {
    if (root == nullptr)
        return 0;
        
    return max(height(root -> left), height(root -> right)) + 1;
}
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* root) {
    if (root == nullptr)
        return 0;
        
    int lh = height(root -> left);
    int rh = height(root -> right);
    int ld = diameter(root -> left);
    int rd = diameter(root -> right);
    
    return max(lh + rh + 1, max(ld, rd));
}