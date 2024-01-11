#include <iostream>
using namespace std;
class TreeNode{
public:
    int root;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->root=val;
        this->left=NULL;
        this->right=NULL;
    }
}
void printInOrder(TreeNode* root){
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

    cout << endl;

    recoverTree(root);

    printInOrder(root);

    cout << endl;

    return 0;
}