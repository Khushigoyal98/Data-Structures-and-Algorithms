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


void enQueueAtBeg(int data){
	
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
		temp->next=front;
	}
	front=temp;
	
}

void enQueueAtEnd(int data){
	if(isEmpty()){
		enQueueAtBeg(data);
		return;
	}
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"Queue is Full";
		return;
	}
	temp->data=data;
	temp->next=NULL;
	rear->next=temp;
	rear=temp;
	
}

void deQueueAtBeg(){
	
	if(isEmpty()){
		cout<<"Queue is Empty";
		return;
	}
	struct node *temp=front;
	front=front->next;
	free(temp);
	
}

void deQueueAtEnd(){
	
	if(isEmpty()){
		cout<<"Queue is Empty";
		return;
	}
	struct node *temp=front;
	struct node *temp2=rear;
	while(temp->next!=rear){
		temp=temp->next;
	}
	rear=temp;
	rear->next=NULL;
	free(temp2);
}

int FrontPeek(){
	
	if(isEmpty()){
		cout<<"Queue is Empty";
		exit(0);
	}
	return front->data;
}

int RearPeek(){
	
	if(isEmpty()){
		cout<<"Queue is Empty";
		exit(0);
	}
	return rear->data;
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
	enQueueAtBeg(5);
	enQueueAtEnd(15);
	enQueueAtEnd(20);
	enQueueAtBeg(25);
	
	printQueue();
	
	deQueueAtBeg();
	deQueueAtEnd();
	
	printQueue();
	
	cout<<"Element at first: "<<FrontPeek()<<endl;
	cout<<"Element at last: "<<RearPeek();
}
