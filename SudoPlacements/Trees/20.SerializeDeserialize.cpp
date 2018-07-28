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
/*this  function serializes 
the binary tree and stores 
it in the vector A*/

void serialize(Node *root,vector<int> &A) {
    if (root == nullptr) {
        A.push_back(-1);
        return;
    }
    
    A.push_back(root -> data);
    
    serialize(root -> left, A);
    serialize(root -> right, A);
}
/*this function deserializes
 the serialized vector A*/
 
int tIndex;
 
Node * deSerializeUtility(Node* root, vector<int> A) {
    if (tIndex == A.size())
        return nullptr;
    if(A[tIndex] == -1) {
        tIndex++;
        return nullptr;
    }
    
    root = newNode(A[tIndex]);
    tIndex++;
    
    root -> left = deSerializeUtility(root -> left, A);
    root -> right = deSerializeUtility(root -> right, A);
    
    return root;
}
Node * deSerialize(vector<int> &A) {
    tIndex = 0;
    return deSerializeUtility(nullptr, A);
}