/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// Returns maximum value in a given Binary Tree
int findMax(struct node* root) {
    if (root == nullptr)
        return INT_MIN;
    return max(root -> data, max(findMax(root -> left), findMax(root -> right)));
}
// Returns minimum value in a given Binary Tree
int findMin(struct node* root) {
    if (root == nullptr)
        return INT_MAX;
    return min(root -> data, min(findMin(root -> left), findMin(root -> right)));
}