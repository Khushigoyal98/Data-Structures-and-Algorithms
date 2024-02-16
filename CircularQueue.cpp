#include<iostream>
#include<stdbool.h>
#include<stdlib.h>
using namespace std;
#define CAPACITY 5

int queue[CAPACITY];
int f=-1;
int r=-1;

bool isEmpty(){
	if(r==f) return true;
	return false;
}

bool isFull(){
	if((r+1)%CAPACITY==f) return true;
	return false;
}

void enqueue(int data){
	if(isFull()){
		cout<<"Queue is Full";
		return;
	}
	if(f==-1){
		f=(f+1)%CAPACITY;
	}
	r=(r+1)%CAPACITY;
	queue[r]=data;
}

void dequeue(){
	if(isEmpty()){
		cout<<"Queue is Empty";
		return;
	}
	f=(f+1)%CAPACITY;
}

int peek(){
	if(isEmpty()){
		cout<<"Queue is Empty";
		exit(0);
	}
	return queue[f];
}

void printQueue(){
		if(isEmpty()){
		cout<<"Queue is Empty";
		return;
	}
	int i=f;
	while(i!=r){
		cout<<queue[i]<<" ";
		i=(i+1)%CAPACITY;
	}
	cout<<queue[i];
	cout<<endl;
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	
	dequeue();
	dequeue();
	enqueue(60);
	enqueue(70);
	printQueue();
}



















