/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/*You are required to complete this function*/

int height(Node* root) {
    if (root -> left == nullptr && root -> right == nullptr)
        return 1;
    else return max(height(root -> left), height(root -> right)) + 1;
}

int getSum(Node* root, int level) {
    if (root == nullptr)
        return 0;
    if (level == 1)
        return (root -> data);
    else if (level > 1)
        return getSum(root -> left, level - 1) + getSum(root -> right, level - 1);
}
int getLevelDiff(Node *root) {
    
    int oddSum = 0, evenSum = 0;
    
    for (int i  = 1; i <= height(root); i++) {
        if (i % 2 == 0)
            evenSum = evenSum + getSum(root, i);
        else 
            oddSum = oddSum + getSum(root, i);
    }
    
    return oddSum - evenSum;
}