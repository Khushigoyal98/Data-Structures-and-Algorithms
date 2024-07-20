#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root = NULL;

struct node *insert(struct node *temp,int data){
	if(temp==NULL){
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
	}
	else if(data<temp->data){
		temp->left=insert(temp->left,data);
	}
	else if(data>=temp->data){
		temp->right=insert(temp->right,data);
	}
	return temp;
}

void Preorder(struct node *temp){
	if(temp==NULL){
		return;
	}
	cout<<temp->data<<" ";
	Preorder(temp->left);
	Preorder(temp->right);
}

void Inorder(struct node *temp){
	if(temp==NULL){
		return;
	}
	Inorder(temp->left);
	cout<<temp->data<<" ";
	Inorder(temp->right);
}

void Postorder(struct node *temp){
	if(temp==NULL){
		return;
	}
	Postorder(temp->left);
	Postorder(temp->right);
	cout<<temp->data<<" ";
}

int main(){
	root=insert(root,10);
	insert(root,73);
	insert(root,14);
	insert(root,36);
	insert(root,94);
	insert(root,55);
	insert(root,78);
	insert(root,10);
	cout<<"Pre-Order Traversal: "<<endl;
	Preorder(root);
	cout<<endl;
	cout<<"In-Order Traversal: "<<endl;
	Inorder(root);
	cout<<endl;
	cout<<"Post-Order Traversal: "<<endl;
	Postorder(root);
}















	
