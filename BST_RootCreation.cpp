#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root=NULL;

struct node *insert(struct node *temp,int data){
	if(temp==NULL){
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
	}
	return temp;
}

int main(){
	root=insert(root,10);
	cout<<"Root Element: "<<root->data;
}
