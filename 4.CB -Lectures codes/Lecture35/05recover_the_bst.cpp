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
vector<TreeNode*> inOrder;

void buildInOrder(TreeNode* root){
    //base case
    if(root==NULL){
        return ;
    }

    //recusive case
    buildInOrder(root->left);
    inOrder.push_back(root->val);
    buildInOrder(root->right);

} 
vector<TreeNode*> inOrder;

void buildInOrder(TreeNode* root) {

    // base case

    if (root == NULL) {
        return;
    }

    // recursive case

    buildInOrder(root->left);

    inOrder.push_back(root);

    buildInOrder(root->right);

}
void recover(TreeNode* root){
    //base case

    //recusive case
    

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
    buildInOrder(root);
    for(x:inOrder){
        cout<< x;
    }

    cout << endl;

    // recoverTree(root);

    printInOrder(root);

    cout << endl;

    return 0;
}