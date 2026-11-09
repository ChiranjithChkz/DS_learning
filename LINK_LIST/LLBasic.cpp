#include<bits/stdc++.h>
using namespace std;

class Node{  // class
    public:
      int data ;
      Node* next;
    
    Node (int val){  //constructor
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public: 
      List(){
        head = tail = NULL;
      }
    
    void push_front(int val){
        Node* newNode =new Node(val);  //dynamic
        // Node newNode(val);  //static

        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode -> next = head;
            head = newNode;
        }

    }

    void push_back(int val){
       Node* newNode = new Node(val);

       if(head == NULL){
        head= tail= NULL;
       }else {
        tail -> next = newNode;
        tail = newNode;
       }
    }

    void pop_front() {
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = temp -> next;
        temp-> next = NULL;

        delete temp;
    }

    void pop_back(){
        if(tail == NULL){
            cout << "Tail is empty" << endl;
            return;
        }

        Node* temp = tail;
        tail = temp -> next;
        temp-> next = NULL;

        delete temp;
    }

    void printLL(){
       
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "-> ";
            temp = temp-> next;
        }
        cout << "NULL" << endl;
    }
};

int main(){

    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(5);
    ll.push_back(10);

    ll.pop_front();
    ll.pop_back();
    

    ll.printLL();

}