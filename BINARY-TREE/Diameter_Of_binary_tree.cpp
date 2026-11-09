#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
   int data;
   TreeNode* left;
   TreeNode* right;

   TreeNode(int val){
       
      data = val;
      left = right = NULL;
   }
};

static int idx = -1;
TreeNode* buildTree(vector<int> preorder){
    idx++;
    
    if(preorder[idx] == -1){
       return NULL;
    }

    TreeNode* root = new TreeNode(preorder[idx]);
    root->left = buildTree(preorder); //LEFT
    root->right = buildTree(preorder); //RIGHT

    return root;

}

class Solution {
public:

    int ans = 0;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int leftHt = height(root->left);
        int rightHt = height(root->right);

        ans = max(ans , leftHt, rightHt);
        return max(leftHt, rightHt) + 1;

    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
        
    }
};

int main(){
    return 0;
}