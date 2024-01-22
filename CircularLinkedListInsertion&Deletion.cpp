#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *end=NULL;

void showAll(){
	
	if(start==NULL){
		cout<<"Empty List"<<endl;
		return;
	}
	struct node *temp=start;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=start);
}

void rev(struct node *temp){
	if(temp==end)return;
	rev(temp->next);
	cout<<temp->data<<" ";
}

void revShow(){
	cout<<end->data<<" ";
	struct node *temp=start;
	rev(temp);
}


void InsAtB(int data){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"Heap Exhausted"<<endl;
		return;
	}
	temp->data=data;
	if(start==NULL){
		start=end=temp->next=temp;
		return;
	}
	temp->next=start;
	start=end->next=temp;
	
}

void InsAtE(int data){
	if(start==NULL){
		InsAtB(data);
		return;
	}
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"Heap Exhausted"<<endl;
		return;
	}
	temp->data=data;
	end->next=temp;
	temp->next=start;
	end=temp;
}

void DelAtB(){
	if(start==NULL){
		cout<<"Empty List"<<endl;
		return;
	}
	
	if(start==end){
		struct node*temp=start;
		start=end=NULL;
		free(temp);
	}
	
	struct node *temp=start;
	start=start->next;
	end->next=temp->next;
	free(temp);
}

void DelAtE(){
	if(start==end || start==NULL){
		DelAtB();
		return;
	}
	struct node *temp=start;
	struct node *temp2=start;
	
	while(temp!=end){
		temp2=temp;
		temp=temp->next;
	}
	temp2->next=start;
	end=temp2;
	free(temp);
}

int main(){
	InsAtB(50);
	InsAtB(40);
	InsAtB(30);
	InsAtB(20);
	InsAtB(10);
	InsAtE(0);
	DelAtB();
	DelAtE();
	
	showAll();
	cout<<endl;
	revShow();
	
}
