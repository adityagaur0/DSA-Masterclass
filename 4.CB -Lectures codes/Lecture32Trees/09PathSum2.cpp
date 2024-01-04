#include<iostream>
#include<vector>

using namespace std;

class TreeNode {

public :

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};

void PathSum(TreeNode* root, int targetSum,vector<int>& path,vector<vector<int>>& paths) {

    //base case
    if(root==NULL){
        return ;
    }
    if(root->left ==NULL and root->right==NULL){
        //you have reached the leaf node
        if(root->val==targetSum){
            path.push_back(root->val);
            // for(int node_val:path){
            //     cout<<node_val<<" ";
            // }
            // cout<<endl;
            paths.push_back(path);
            path.pop_back(); //pop back after print the path aka back track
            //backtrack here cuz multiple path exist.
            //take referenc od path to node
        }
        return; // return if no path found;
        
    }

    //recursive case

	// 1. recursively, print if their exists a root-to-leaf path in the leftSubtree whose sum is equal to targetSum - root->val

	// 2. recursively, print if there exists a root-to-leaf path in the rightSubtree whose sum is equal to targetSum - root->val

    path.push_back(root->val);
    PathSum(root->left,targetSum - root->val,path,paths);
    PathSum(root->right,targetSum - root->val,path,paths);
    path.pop_back();

}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(5);

	root->left = new TreeNode(4);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);

	root->right = new TreeNode(8);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);

	int targetSum = 22;
    vector<int> path;
	// PathSum(root, targetSum,path) ;
    vector<vector<int>> paths;
    PathSum(root, targetSum,path,paths) ;

	return 0;
}