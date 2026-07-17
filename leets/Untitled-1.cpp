//lvlordertraversal

void lvlorder(Node* root){
    if(root ==NULL) return;
    queue<int>q;
    q.push(NULL);
        whie(!q.empty()){
            Node* forntNode = q.front();
            q.pop();
            if(forntNode != NULL){
                cout << forntNode->data<< " ";
                if(frontNode->left)q.push(forntNode->left);
                if(forntNode ->right) q.push(frontNode->right);
            }else if(!q.empty()){
                q.push(NULL);
            }
        }
}