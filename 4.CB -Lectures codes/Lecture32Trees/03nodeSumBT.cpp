#include <iostream>
using namespace std;

int sum;
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
// void computeSumOfTreesNodes(TreeNode* root){
//     //base case
//     if(root==NULL){
//         return;
        
//     }

//     //recusrive case
//     sum+=root->val;

//     //2. print the preorder travesal of the left sub tree.
//     computeSumOfTreesNodes(root->left);

//     //3.print the preorder travesal of the right sub tree.
//     computeSumOfTreesNodes(root->right);
// }
int computeSumOfTreesNodes(TreeNode* root){
    //base case
    if(root==NULL){
        return 0;
        
    }

    //recusrive case  x+y+root_val

    //1. print the preorder travesal of the left sub tree.
    int x= computeSumOfTreesNodes(root->left);

    //2.print the preorder travesal of the right sub tree.
    int y= computeSumOfTreesNodes(root->right);

    return root->val+x+y;
}



int main(){
    TreeNode* root=buildTree();
    //10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1 
    cout<<computeSumOfTreesNodes(root);
    //cout<<sum<<endl;
    return 0;
}