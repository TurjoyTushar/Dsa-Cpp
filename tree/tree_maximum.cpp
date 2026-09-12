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
int func(Node*root){
    if(root==NULL) return INT_MIN;
    int leftmax=func(root->left);
    int rightmax=func(root->right);
    return max(root->data,max(leftmax,rightmax));
}



int main(){
    struct Node*root=new Node(10);
    root->left=new Node(12);
    root->right=new Node(20);

    root ->left->right=new Node(30);
    root-> left->left=new Node(40);

    root ->right->left=new Node(50);
    root->right->right=new Node(60);

    cout<<"the maximum is "<<func(root)<<endl;

    return 0;
}