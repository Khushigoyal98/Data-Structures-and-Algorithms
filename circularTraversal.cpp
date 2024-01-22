#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *end=NULL;

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

void circularTraversal(int x){
	if(start==NULL){
		cout<<"Empty List"<<endl;
		return;
	}struct node *temp=start;
	while(temp->data!=x){
		temp=temp->next;
		if(start==temp){
			cout<<"No data found"<<endl;
			return;
		}
	}
	struct node *temp2=temp;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=temp2);
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

int main(){
	InsAtB(50);
	InsAtB(40);
	InsAtB(30);
	InsAtB(20);
	InsAtB(10);
	InsAtE(0);
	circularTraversal(0);
	cout<<endl;
	circularTraversal(30);
	
}

