#include <iostream>

class TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right= NULL;
    }
}
int maxLeft(TreeNode* root){
    //base case
    

    //recusrsive case
    left call;
    right call;

}
bool isBST(TreeNode* root){
    //base case

    //recursive case 
    isBST(root->left);
    isBST(root->right);
}
int main() {

	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

	isBST(root) ? cout << "true" << endl : cout << "false" << endl;

	// isBSTEfficient(root).bst ? cout << "true" << endl : cout << "false" << endl;

	// long long lb = (long long)INT_MIN - 1; // or LLONG_MIN
	// long long ub = (long long)INT_MAX + 1; // or LLONG_MAX

	// isBSTRange(root, lb, ub) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}