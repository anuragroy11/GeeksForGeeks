/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

void printLevel(Node* root, int k) {
    if (root == nullptr)
        return;
    if (k == 0)
        cout << root -> data << " ";
    else if ( k > 0) {
        printLevel(root -> left, k - 1);
        printLevel(root -> right, k -1);
    }
        
}
// Recursive function to print right view of a binary tree.
void printKdistance(Node *root, int k) {
    
    printLevel(root, k);
}