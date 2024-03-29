#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
using namespace std;

#define CAPACITY 50
char stack[CAPACITY];
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

void push(char data){
	if(isFull()){
		cout<<"Stack Overflow";
		return;
	}
	stack[++top]=data;
}

char pop(){
	if(isEmpty()){
		cout<<"Stack Underflow";
		exit(0);
	}
	return stack[top--];
}

char peek(){
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

bool isValid(char str[]){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='('|| str[i]=='{' || str[i]=='['){
			push(str[i]);
		}else if(str[i]==')'|| str[i]=='}' || str[i]==']'){
			if(isEmpty()){
				return false;	
			}
			else if(str[i]==')'){
				if(peek()=='('){
					pop();
				}else{
					return false;
				}
			}
			else if(str[i]=='}'){
				if(peek()=='{'){
					pop();
				}else{
					return false;
				}
		}
		else if(str[i]==']'){
				if(peek()=='['){
					pop();
				}else{
					return false;
				}
			}
	}
		i++;
	}
	if(isEmpty()){
		return true;
	}
	return false;
}

int main(){
	
	char input[CAPACITY];
	cout<<"Enter the input string: "<<endl;
	gets(input);
	if(isValid(input)){
		cout<<"Balanced Parantheses"<<endl;
		puts(input);
	}else{
		cout<<"Unbalanced Parantheses"<<endl;
		puts(input);
	}
	
	
}


























