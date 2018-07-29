/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/
bool isIsomorphic(Node *root1,Node *root2) {
    if (!root1 && !root2)
        return true;
    if (!root1 || !root2)
        return false;
    if (root1 -> data != root2 -> data)
        return false;
    else return (isIsomorphic(root1 -> left, root2 -> left) || isIsomorphic(root1 -> right, root2 -> left));
        
}