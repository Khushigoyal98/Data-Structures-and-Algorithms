#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
	int data;
	struct node *next;
};

void showall(struct node *ptr){
	while(ptr->next!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<ptr->data;
}


int main(){
	struct node *head;
	struct node *first;
	struct node *second;
	
	head= (struct node*)malloc(sizeof(struct node));
	first= (struct node*)malloc(sizeof(struct node));
	second= (struct node*)malloc(sizeof(struct node));
	
	head ->data=12;
	head->next=first;
	
	first ->data =13;
	first->next=second;
	
	second->data=14;
	second->next=NULL;
	
	showall(head);
	
	free(head);
	free(first);
	free(second);
	
}
