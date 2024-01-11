#include <iostream>
#include <vector>
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

void printInOrder(TreeNode* root){
    //base case
    if(root==NULL){
        return ;
    }

    //recusive case
    printInOrder(root->left);
    cout<<root->val;
    printInOrder(root->right);

} 


void buildInOrder(TreeNode* root,vector<TreeNode*>& inOrder){
    //base case
    if(root==NULL){
        return ;
    }

    //recusive case
    buildInOrder(root->left,inOrder);
    inOrder.push_back(root);
    buildInOrder(root->right,inOrder);

} 

void recoverTree(TreeNode* root){
    vector<TreeNode*>inOrder; //cuz yea tree node ka address save kr raha hoga.
    buildInOrder(root,inOrder);
    for(int i=0;i<inOrder.size();i++){
        cout<<inOrder[i]->val;
    }
    
    // TreeNode* first = NULL;
    // TreeNode* second = NULL;
    // for(int i=1;i<inOrder.size();i++){
    //     if(inOrder[i]->val < inOrder[i-1]->val){
    //         //we have found the first voilation in the Bst property at [i-1] index
            
    //         if(first==NULL){
    //             first=inOrder[i-1];
    //         }else{
    //         // we have found the second voilation in the BST property at [i] index
    //             second=inOrder[i];
    //              break;
    //         }
            
            
    //     }
    // }

    // swap(first->val,second->val);
    

}



int main() {

    TreeNode* root = NULL;
    root = new TreeNode(3);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);

    root->right = new TreeNode(5);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(6);

    printInOrder(root);
    cout<<endl;


    cout << endl;

    recoverTree(root);
    cout<< endl;

    printInOrder(root);

    cout << endl;

    return 0;
}