/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the Node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
*/
// function should return the root of the new binary tree formed

Node* helper(int n, int si, int pre[], char preLN[], int &k) {
    if (si == n)
        return nullptr;
    Node* temp = newNode(pre[si]);
    k++;
    
    if (preLN[si] == 'L')
        return temp;
    
    temp -> left = helper(n,si+1,pre,preLN,k);
    temp -> right = helper(n,k,pre,preLN,k);
    return temp;
}

struct Node *constructTree(int n, int pre[], char preLN[]) {
    int k=0;
    return helper(n,0,pre,preLN,k);
}