
int countleaf(Node* root){
    if(root->left == NULL && root->right ==NULL){
        return 1;
    }
    int x = countleaf(root->left);
    int y = countleaf(root->right);
    return x + y;
}