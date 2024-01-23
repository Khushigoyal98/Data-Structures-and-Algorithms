#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *top=NULL;

bool isEmpty(){
	if(top==NULL){
		return true;
	}
	return false;
}

void push(int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	
	if(temp==NULL){
		cout<<"Stack Overflow";
		return;
	}
	
	temp->data=data;
	temp->next=top;
	top=temp;
}

int pop(){
	if(isEmpty()){
	cout<<"Stack Underflow";
	exit(0);
}
struct node *temp=top;
int data=temp->data;
top=top->next;
free(temp);
return data;	
}

int peek(){
	if(isEmpty()){
	cout<<"Stack is Empty";
	exit(0);
	}
	return top->data;
}


void printStack(){
	if(isEmpty()){
	cout<<"Stack Underflow";
	exit(0);
}
	struct node *temp=top;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	pop();
	pop();
	push(35);
	push(45);
	printStack();
	cout<<endl;
	cout<<"Peek Element: "<<peek();
	
}























