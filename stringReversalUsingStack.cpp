#include<iostream>
#include<stdbool.h>
#include<string.h>
#define CAPACITY 50
using namespace std;

char stack[CAPACITY];
int top=-1;

bool isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}

void push(char data){
	stack[++top]=data;
}

char pop(){
	return stack[top--];
}

char peek(){
	return stack[top];
}

int main(){
	char input[CAPACITY];
	char output[CAPACITY];
	cout<<"Enter Input string: "<<endl;
	gets(input);
	
	int i;
	while(input[i]!='\0'){
		push(input[i++]);
	}
	int k=0;
	while(!isEmpty()){
		output[k++]=pop();
	}
	output[k++]='\0';
	puts(output);
}
