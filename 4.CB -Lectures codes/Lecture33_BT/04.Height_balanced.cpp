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

int computeHeight(TreeNode* root){
    //base case
    if(root==NULL){
        return -1;
    }

    //recusive case
    int x= computeHeight(root->left);
    int y=computeHeight(root->right);
    return max((1+x), (1+y));
}
// ---- approach 1.
bool checkHeightBalanced(TreeNode* root){ //time complexity: O(n2)
    //base case
    if(root==NULL){
        return true; // no voilation if root == null no height balanced property violating
    }

    //recusive case
    //check if the given bt root is height balanced or not

    //1. recusively, check if the lst is height balanced or not.
    bool lstIsBalanced=checkHeightBalanced(root->left);
    //2. recusively, check if the rst is height balanced or not.
    bool rstIsBalanced=checkHeightBalanced(root->right);
    //3. check if the root node satisfy the height balanced property.
    bool rootIsBalanced= abs(computeHeight(root->left) -computeHeight(root->right))<=1?true :false;

    return lstIsBalanced and rstIsBalanced and rootIsBalanced;

}
// --- optimised approach O(n)
class Pair{
	 public:
	 int height;
	 bool isBalanced;
};

Pair optimisedHeightBalanced(TreeNode* root){
	Pair p;
	//base case
	if(root==NULL){
		p.height=-1;
		p.isBalanced=true;
		return p;
	}

	//recusive case
	Pair left=optimisedHeightBalanced(root->left);
	Pair right=optimisedHeightBalanced(root->right);

	bool rootIsBalanced=abs(left.height-right.height)<=1?true:false;

	p.height=1+max(left.height,right.height);
	p.isBalanced =left.isBalanced and right.isBalanced and rootIsBalanced;

	return p;

}


int main() {

	TreeNode* root = buildTree();

	checkHeightBalanced(root) ? cout << "height-balanced!" << endl : cout << "not height-balanced" << endl;

	Pair p = optimisedHeightBalanced(root);
	p.isBalanced ? cout << "height-balanced!" << endl : cout << "not height-balanced" << endl;

	return 0;
}