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

struct node *search(struct node *temp, int data){
	if(temp==NULL){
		return NULL;
	}else if(temp->data==data){
		return temp;
	}else if(data<temp->data){
		return search(temp->left,data);
	}else{
		return search(temp->right,data);
	}
}

void Inorder(struct node *temp){
	if(temp==NULL){
		return;
	}
	Inorder(temp->left);
	cout<<temp->data<<" ";
	Inorder(temp->right);
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
	cout<<endl;
	cout<<"In-Order Traversal: "<<endl;
	Inorder(root);
	cout<<endl;
	
	

	struct node *ptr=search(root,10);
		if(ptr==NULL){
		cout<<"Value not found "<<endl;
		
	}else{
		cout<<"Value found - "<<ptr->data<<endl;
	}
}















	
