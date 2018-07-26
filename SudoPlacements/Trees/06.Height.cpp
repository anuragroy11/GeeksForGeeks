/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the height of binary tree with given root.  */
int height(Node* node) {
   
    if (node -> left == nullptr && node -> right == nullptr)
        return 1;
        
    return max(height(node -> left) + 1, height(node -> right) + 1);
}