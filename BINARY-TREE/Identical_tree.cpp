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


//leetcode: Identical tree problem 
class Solution{
public: 
   bool isIdentical(TreeNode* p, TreeNode* q){
     if(p == NULL || q == NULL){
         return p == q;
     }

     bool isLeftSame = isIdentical(p->left, q->left);
     bool isRightSame = isIdentical(p->right, q->right);

     return isLeftSame && isRightSame && p->data == q->data;
   }

};

int main(){
    return 0;
}