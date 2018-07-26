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
/* Prints inorder traversal of Binary Tree.  In output
   all keys should be separated by space. For example
  inorder traversal of below tree should be "20 10 30"
         10
       /      \ 
   20       30 */
void inOrder(Node* root) {
    if (root -> left != nullptr)
        inOrder(root -> left);
        
    cout << root -> data << " ";
    
    if (root -> right != nullptr)
        inOrder(root -> right);
}