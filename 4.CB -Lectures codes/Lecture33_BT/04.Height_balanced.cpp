/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: true

	Input : 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
	Output: true

	Input : 10 20 30 -1 -1 -1 -1
	Output: false

*/

#include<iostream>
#include<cmath>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};


TreeNode* buildTree() {

	int val;
	cin >> val;

	// base case

	if (val == -1) {
		// construct an empty tree and return pointer to its root TreeNode
		return NULL;
	}

	// recursive case

	// 1. construct the root val using the first value of the given preOrder traversal

	TreeNode* root = new TreeNode(val);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();

	return root;

}
bool checkHeightBalanced(TreeNode* root){
    //base case

    //recusive case
    //check if the given bt root is height balanced or not

    //1. recusively, check if the lst is height balanced or not.
    int x=checkHeightBalanced(root->left);
    //2. recusively, check if the rst is height balanced or not.
    int y=checkHeightBalanced(root->right);
    //3. check if the root node satisfy the height balanced property.
    if(abs(x-y)<=1){
        return true;
    }
    return false;

}


int main() {

	TreeNode* root = buildTree();

	checkHeightBalanced(root) ? cout << "height-balanced!" << endl : cout << "not height-balanced" << endl;

	// Pair p = checkHeightBalancedOptmised(root);
	// p.isBalanced ? cout << "height-balanced!" << endl : cout << "not height-balanced" << endl;

	return 0;
}