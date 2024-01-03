#include <iostream>
#include <string>
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

TreeNode* buildTree(){
    int val; 
    cin>>val;

    if(val==-1){
        return NULL;
    }
    //1. create root node
    TreeNode* root=new TreeNode(val); 

    //2. recursively, create the LST using the preorder travesal of lst
    root->left =buildTree();

    //3. recursively, create the RST using the preorder travesal of rst
    root->right=buildTree();

    return root;

}
string tree2str(TreeNode* root){
    //base case
    if(root==NULL){
        return "";
        
    }

    //recusrive case  x+y+root_val

    //1. print the preorder travesal of the left sub tree.
    string x= tree2str(root->left);

    //2.print the preorder travesal of the right sub tree.
    string y= tree2str(root->right);

    if(x!=""and y!=""){
        return to_string(root->val)+"("+x+")("+y+")";
    }
    if(x!=""){
        return to_string(root->val)+"("+x+")";

    }
    if(y!=""){
        return to_string(root->val)+"()("+y+")";

    }
    return to_string(root->val); // condition jab root hi hai and uska right and left child kuch ni (eg 10 -1 -1 return 10)
}



int main(){
    TreeNode* root=buildTree();
    //10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1 
    cout<<tree2str(root);

    return 0;
}