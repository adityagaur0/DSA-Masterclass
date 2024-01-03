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
void printInOrder(TreeNode* root){
    //base case
    //leaf
    if(root==NULL){
        cout<<-1<<" ";
        return;

    }

    //recusrive case
    //1. print the preorder travesal of the left sub tree.
    printInOrder(root->left);

    //2. process the root node
    cout<<root->val<<" ";

    //3.print the preorder travesal of the right sub tree.
    printInOrder(root->right);
}

void printPostOrder(TreeNode* root){
    //base case
    //leaf
    if(root==NULL){
        cout<<-1<<" ";
        return;

    }

    //recusrive case
    //1. print the preorder travesal of the left sub tree.
    printPostOrder(root->left);
 
    //2.print the preorder travesal of the right sub tree.
    printPostOrder(root->right);

    //3. process the root node
    cout<<root->val<<" ";
}
int main(){
    TreeNode* root=NULL;
    /*
    The TreeNode is typically a struct or class representing 
    a node in the tree, and the root pointer points to the 
    topmost node in the tree, commonly referred to as the root node.

    By initializing root to NULL, it indicates that the tree is
     currently empty. As nodes are added to the tree, the root
     pointer will be updated to point to the actual root node of the tree.
    */

    root=new TreeNode(10);  //on heap
    root->left=new TreeNode(20);
    root->right=new TreeNode(30);
    root->left->left=new TreeNode(40);
    root->left->right=new TreeNode(50);
    root->right->right=new TreeNode(60);
    root->left->right->left=new TreeNode(70);

    printPreOrder(root);
    cout<<endl;
    printInOrder(root);
    cout<<endl;
    printPostOrder(root);
    return 0;

    
}