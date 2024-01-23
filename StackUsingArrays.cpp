#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
using namespace std;

#define CAPACITY 5
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

int peek(){
	if(isEmpty()){
		cout<<"Empty Stack";
		exit(0);
}
return stack[top];
}

void printStack(){
	if(isEmpty()){
		cout<<"Empty Stack";
		return;
}
for(int i=top;i>=0;i--){
	cout<<stack[i]<<" ";
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


























