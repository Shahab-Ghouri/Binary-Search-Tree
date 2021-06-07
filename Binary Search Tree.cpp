  
// 		© Copyright 2021 , OBAID ULLAH SHAHAB GHOURI 

#include <iostream>

using namespace std;


struct Node{
	int data;
	Node *left,*right;
	
	Node(int value){
		this->data = value;
		left = right = NULL; 
	}
};

Node *insert(Node *root,int val){
	if(root == NULL){
		return new Node(val);
	}
	if(val < root->data){// left child
		root->left = insert(root->left,val);	
	}
	// val > root->data  i.e. right child
	else{
		root->right = insert(root->right,val);
	}
	return root;
}

void inorder(Node *root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);

}
main(){
	Node *root = new Node(10);
	root = insert(root,5);
	root = insert(root,12);
	root = insert(root,0);
	inorder(root);
}
