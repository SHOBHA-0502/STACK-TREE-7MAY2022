#include <queue>

void printLevelWise(TreeNode<int>* root) {
    if(root== NULL){
        return ;
    }
    queue<TreeNode<int>*>qu;
    qu.push(root);
    while(qu.size() !=0){
        TreeNode<int>*front= qu.front();
        qu.pop();
        cout<<front->data<<":";
        for(int i =0 ; i< front->children.size();i++){
            
            cout<<front->children[i]->data<<",";
            TreeNode<int>*child=front->children[i];
            qu.push(child);
        }
        cout<<endl;
    }
    
        
    }
