#include <iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val=val:
        this->left=NULL;
        this->right=NULL;

    }
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    //base case

    //recusive case

    TreeNode left= 
}
int main() {

	TreeNode* root = NULL;

	root = new TreeNode(3);

	root->left = new TreeNode(5);
	root->left->left = new TreeNode(6);
	root->left->right = new TreeNode(2);
	root->left->right->left = new TreeNode(7);
	root->left->right->right = new TreeNode(4);

	root->right = new TreeNode(1);
	root->right->left = new TreeNode(0);
	root->right->right = new TreeNode(8);

	TreeNode* p = root->left->right->left; // 7
	TreeNode* q = root->right->left; // 0

	TreeNode* lca = lowestCommonAncestor(root, p, q);

	cout << lca->val << endl;

	return 0;
}