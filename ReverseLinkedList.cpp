#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
using namespace std;

#define CAPACITY 10

class stack{
	public:
	int stack[CAPACITY];
	int top=-1;

bool isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}

bool isFull(){
	if(top==CAPACITY-1){
		return true;
	}
	return false;
}

void push(int data){
	if(isFull()){
		cout<<"Stack Overflow";
		return;
	}
	stack[++top]=data;
}

int pop(){
	if(isEmpty()){
		cout<<"Stack Underflow";
		exit(0);
	}
	return stack[top--];
}
};

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;

void InsertAtB(int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"Heap Overflow"<<endl;
		return;
	}
	temp->data=data;
	temp->next=start;
	start=temp;
}

void InsertAtE(int data){
	if(start==NULL){
		InsertAtB(data);
		return;
	}
	struct node *ins=(struct node*)malloc(sizeof(struct node));
	if(ins==NULL){
		cout<<"Heap Overflow"<<endl;
		return;
	}
	struct node *temp=start;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	ins->next=temp->next;
	ins->data=data;
	temp->next=ins;
}

int count(){
	struct node *temp=start;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}

void InsertAtIndex(int data,int index){
	if(index<=0){
		InsertAtB(data);
	}else if(index>count()){
		InsertAtE(data);
		return;
	}
	struct node *ins=(struct node*)malloc(sizeof(struct node));
	if(ins==NULL){
		cout<<"Heap Overflow"<<endl;
		return;
	}
	int i=0;
	struct node *temp=start;
	while(i!=index-1){
		temp=temp->next;
		i++;
	}
	ins->data=data;
	ins->next=temp->next;
	temp->next=ins;
}

void display(){
	if(start==NULL){
		cout<<"Empty Linked List"<<endl;
		return;
	}
	struct node *temp=start;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void rev(){
	stack s;
	struct node *temp=start;
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}
	temp=start;
	while(temp!=NULL){
		temp->data=s.pop();
		temp=temp->next;
	}
}

int main(){
	InsertAtB(5);
	InsertAtB(10);
	InsertAtB(7);
	InsertAtE(19);
	InsertAtE(45);
	InsertAtE(32);
	InsertAtIndex(5,9);
	display();
	
	rev();
	display();
	
	return 0;
	
}

















