#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

void showAll(struct node *head){
	struct node *temp=head;
	do{
	cout<<temp->data<<" ";
	temp=temp->next;
	}
	while(temp!=head);
}

int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	struct node *first=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	
	head->data=10;
	head->next=first;
	
	first->data=20;
	first->next=second;
	
	second->data=30;
	second->next=third;
	
	third->data=40;
	third->next=head; //last node is linked to head
	
	showAll(head);
}
