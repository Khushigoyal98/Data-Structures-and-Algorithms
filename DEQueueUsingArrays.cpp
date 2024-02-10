#include<iostream>
#include<stdbool.h>
#define CAPACITY 5
using namespace std;

int f=-1;
int r=-1;
int queue[CAPACITY];

bool isEmpty(){
	if(f==-1){
		return true;
	}
	return false;
}

bool isFull(){
	if(r==CAPACITY-1){
		return true;
	}
	return false;
}

void enQueueAtEnd(int data){
	if(isFull()){
		cout<<"Queue is Full";
		return;
	}
	if(f==-1){
		f++;
	}
	queue[++r]=data;
}

void enQueueAtBeg(int data){
	if(isEmpty()||isFull()){
		enQueueAtEnd(data);
		return;
	}
	for(int i=r;i>=f;i--){
		queue[i+1]=queue[i];
		
	}
	r++;
	queue[f]=data;
}

void deQueueAtEnd(){
	if(isEmpty()){
		cout<<"Queue is Empty";
		return;
	}
	r--;
}

void deQueueAtBeg(){
	if(isEmpty()){
		cout<<"Queue is Empty";
		return;
	}
	for(int i=f+1;i<=r;i++){
		queue[i-1]=queue[i];
	}
	r--;
}

int FrontPeek(){
		if(isEmpty()){
		cout<<"Queue is Empty";
		exit(0);
	}
	return queue[f];
}

int RearPeek(){
		if(isEmpty()){
		cout<<"Queue is Empty";
		exit(0);
	}
	return queue[r];
}

void printQueue(){
	for(int i=f;i<=r;i++){
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}

int main(){
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






















