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
TreeNode* findMin(TreeNode* root){
    //base case
    if(root==NULL){
        return NULL;
    }
    if(root->left!=NULL){
        return root;
    }


    //recusrsive case
    return findMin(root->left);

}
TreeNode* findMax(TreeNode* root){
    //base case
    if(root==NULL){
        return NULL;
    }
    if(root->right!=NULL){
        return root;
    }


    //recusrsive case
    return findMin(root->right);

}
bool isBST(TreeNode* root){
    //base case

    //recursive case 
    //1.check if the lst is a bst
    bool leftisBst=isBst(root->left);
    //2.check if the rst is a bst
    bool rightisBst=isBst(root->right);
    //3. check if the root node satsify the property of the bst
    bool rootisBst=

    
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