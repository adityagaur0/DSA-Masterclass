#include <iostream>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;

        }
};
void printPreOrder(TreeNode* root){
    //base case
    //leaf
    if(root==NULL){
        cout<<-1<<" ";
        return;

    }

    //recusrive case
    //1. process the root node
    cout<<root->val<<" ";

    //2. print the preorder travesal of the left sub tree.
    printPreOrder(root->left);

    //3.print the preorder travesal of the right sub tree.
    printPreOrder(root->right);
}

TreeNode* buildTree(){
    int val; 
    cin>>val;

    if(val==-1){
        return NULL;
    }
    //1. create root node
    TreeNode* root=new TreeNode(val); 

    //2. recursively, create the LST using the preorder travesal of lst
    root->left =buildTree();

    //3. recursively, create the RST using the preorder travesal of rst
    root->right=buildTree();

    return root;

}
bool flipEquiv(TreeNode* root1,TreeNode* root2){
    //base case

    if(root1==NULL and root2==NULL){ //both tree empty
        return true;
    }
    //first tree empty and second tree not empty not flip equivalent
    if(root1==NULL or root2==NULL){ //atleast one tree empty
        return false;
    }
    if(root1->val!= root2->val){ // both trees are non empty
        return false;
    }


    //recusrive case
    //Decide for the root node
    //1. perform flip operation
    swap(root1->left,root1->right);
    if(flipEquiv(root1->left,root2->left)and flipEquiv(root1->right,root2->right)){
        return true;
    }

    //2.donot perform flip operation
    //back track
    swap(root1->left,root1->right);
    if(flipEquiv(root1->left,root2->left)and flipEquiv(root1->right,root2->right)){
        return true;
    }

    return false;

}


int main(){
    TreeNode* root1=buildTree();
    TreeNode* root2=buildTree();
    //10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1 
    flipEquiv(root1,root2)?cout<<"true"<<endl:cout<<"false"<<endl;

    return 0;

    
}