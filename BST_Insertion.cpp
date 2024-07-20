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
		
		return root;
	}
	
	struct node *current=root;
	struct node *parent=root;
	
	while(current!=NULL){
		parent=current;
		
		if(current->data>data){
			current=current->left;
		}else{
			current=current->right;
		}
	}
		current=(struct node *)malloc(sizeof(struct node));
		current->data=data;
		current->left=NULL;
		current->right=NULL;
		
		if(parent->data>data){
			parent->left=current;
		}else{
			parent->right=current;
		}
		return root;
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
	cout<<"Values inserted successfully!"<<endl;
}



























