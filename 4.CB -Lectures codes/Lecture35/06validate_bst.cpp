#include <iostream>
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
int findMin(TreeNode* root){
    //base case
    if(root==NULL){
        return INT_MAX;
    }
    while (root->left != NULL) {
		root = root->left;
	}


    //recusrsive case
    return root->val;

}
int findMax(TreeNode* root){
    //base case
    if(root==NULL){
        return INT_MIN;
    }
    while (root->right != NULL) {
		root = root->right;
	}


    //recusrsive case
    return root->val;

}
bool isBST(TreeNode* root){
    //base case
    if(root==NULL){
        return true;
    }

    //recursive case 
    //1.check if the lst is a bst
    bool leftisBst=isBST(root->left);
    //2.check if the rst is a bst
    bool rightisBst=isBST(root->right);
    //3. check if the root node satsify the property of the bst
    bool rootisBst= (root->val> findMax(root->left)) and (root->val< findMin(root->right));

    return leftisBst and rightisBst and rootisBst;

    
}
Pair {
public:
    int maxval;
    int minVal;
    bool isBst;

};
int main() {

	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

	isBST(root) ? cout << "true" << endl : cout << "false" << endl;
    cout<<endl;
    cout<<isBST(root) ;

	// isBSTEfficient(root).bst ? cout << "true" << endl : cout << "false" << endl;

	// long long lb = (long long)INT_MIN - 1; // or LLONG_MIN
	// long long ub = (long long)INT_MAX + 1; // or LLONG_MAX

	// isBSTRange(root, lb, ub) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}