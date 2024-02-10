//LINEAR QUEUE IMPLEMENTATION USING LINKED LIST

#include<iostream>
#include<stdbool.h>
#include<stdlib.h>
using namespace std;

struct node {
	int data;
	struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

bool isEmpty(){
	if(front==NULL){
		return true;
	}
	return false;
}


void enQueue(int data){
	
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"Queue is Full";
		return;
	}
	temp->data=data;
	if(isEmpty()){
		front=rear=temp;
	}
	else{
		rear->next=temp;
	}
	temp->next=NULL;
	rear=temp;
	
	
}

void deQueue(){
	
	if(isEmpty()){
		cout<<"Queue is Empty";
		return;
	}
	struct node *temp=front;
	front=front->next;
	free(temp);
	
}

int peek(){
	
	if(isEmpty()){
		cout<<"Queue is Empty";
		exit(0);
	}
	return front->data;
}

void printQueue(){
	struct node *temp=front;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	enQueue(5);
	enQueue(15);
	enQueue(20);
	enQueue(25);
	enQueue(30);
	enQueue(35);
	enQueue(40);
	enQueue(45);
	enQueue(50);
	
	printQueue();
	
	deQueue();
	deQueue();
	deQueue();
	
	printQueue();
	
	cout<<"Element at first: "<<peek();
}
