#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

void showall(struct node *head){
	struct node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

void showAllRev(struct node *third){
	struct node *temp=third;
	while(temp!=NULL){
	cout<<temp->data<<endl;
	temp=temp->prev;
	}
}

int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	struct node *first=(struct node *)malloc(sizeof(struct node));
	struct node *second=(struct node *)malloc(sizeof(struct node));
	struct node *third=(struct node *)malloc(sizeof(struct node));
	
head->data=1;
head->next=first;
head->prev=NULL;

first->data=2;
first->next=second;
first->prev=head;

second->data=3;
second->next=third;
second->prev=first;

third->data=4;
third->next=NULL;
third->prev=second;

showall(head);
cout<<endl;
showAllRev(third);
}


