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

int main(){
    TreeNode* root=NULL;
    //10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1 

    // root=new TreeNode(10);  //on heap
    // root->left=new TreeNode(20);
    // root->right=new TreeNode(30);
    // root->left->left=new TreeNode(40);
    // root->left->right=new TreeNode(50);
    // root->right->right=new TreeNode(60);
    // root->left->right->left=new TreeNode(70);
    root=buildTree();

    printPreOrder(root);
    cout<<endl;

    return 0;

    
}