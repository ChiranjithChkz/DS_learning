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


//PreOrder--->
// output sequence : root, left , right
//  1 2 3 4 5
void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//InOrder 
// Output sequence : left, root, right
//   2 1 4 3 5
void inOrder(Node* root){
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout << root->data << " " ;
    inOrder(root->right);

}

//PostOrder
// output order: left, right, root
void postOrder(Node* root){
    if(root == NULL){
       return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

}

//Level Order

// void levelOrder(Node* root){
//     queue<Node*> q;

//     q.push(root);
//     while(q.size() > 0){
//         Node* curr = q.front();
//         q.pop();

//         cout << curr->data << " ";

//         if(curr->left != NULL){
//             q.push(curr->left);
//         }

//         if(curr->right != NULL){
//             q.push(curr->right);
//         }
//     }

//     cout << endl;
// }


void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }

    cout << endl;
}
  

int main(){

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = buildTree(preorder);

    // preOrder(root);
    // cout << endl;


    // inOrder(root);
    // cout << endl;


    // postOrder(root);
    // cout << endl;

    levelOrder(root);



    return 0;
}