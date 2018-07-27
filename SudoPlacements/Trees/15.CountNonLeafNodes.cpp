/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
int countNonLeafNodes(Node* root) {
    
    if (root == nullptr)
        return 0;
    if (root -> left == nullptr && root -> right == nullptr)
        return 0;
        
    return countNonLeafNodes(root -> left) + countNonLeafNodes(root -> right) + 1;
}