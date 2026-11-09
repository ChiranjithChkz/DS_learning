#include<bits/stdc++.h>
using namespace std;

class Node{
public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
       
      data = val;
      left = right = NULL;
   }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;
    
    if(preorder[idx] == -1){
       return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); //LEFT
    root->right = buildTree(preorder); //RIGHT

    return root;

}


// Top view of binary tree
void topView(Node* root){
    queue<pair<Node*, int>> q;  //(Node, HD)
    map<int , int> m; // (HD, node val)
    q.push({root, 0});

    while(q.size() > 0) {
        /// store in two variable 
        Node* curr = q.front().first;
        int currHD = q.front().second;

        // then pop from queue so that one value can't be duplicate
        q.pop();

         m[currHD] = curr->data; // always over write so that last one can hold in map 

        if(curr->left != NULL){
            q.push({curr->left, currHD - 1});  // for left side
        }

        if(curr->right != NULL){
            q.push({curr->right, currHD + 1}); //for right side
        }
    }

    for(auto it: m){
        cout << it.second << " ";
    }
    cout << endl;
}


int main(){

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = buildTree(preorder);

    topView(root);  
 



    return 0;
}