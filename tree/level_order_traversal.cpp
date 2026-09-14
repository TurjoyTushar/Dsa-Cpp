
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*right;
    Node*left;
    Node(int val){
        data=val;
        right=left=NULL;
    }
};

void levelorder(Node*root){
    if(root==NULL)return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        int size=q.size();
        while(size--){
             Node*current=q.front();
        q.pop();

        cout<<current->data<<" ";
        if(current->left!=NULL){
            q.push(current->left);
        }

        if(current->right!=NULL){
            q.push(current->right);
        }
        }
        cout<<endl;
       
    }
}


int main(){

    Node* root= new Node(10);
    //right portion of main root
    root->right=new Node(15);
    root ->right->left=new Node(12);
    root->right->right= new Node(20);
    //left portion of main root
    root->left=new Node(5);
    root->left->left=new Node(2);
    root->left->right= new Node(7);
    root->left->right->left= new Node(6);
    root->left->right->right= new Node(8);
    root->left->right->right->right=new Node(9);

    cout<<"level order traversal -> "<<endl;
    levelorder(root);


   


    return 0;
}