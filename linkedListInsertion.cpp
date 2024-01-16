#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start =NULL;

void InsertAtB(int data){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"HEAP OVERFLOW"<<endl;
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
		cout<<"HEAP OVERFLOW"<<endl;
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

void InsertAtIndex(int data, int index){
	if(index<=0){
		InsertAtB(data);
		return;
	}else if(index>count()){
		InsertAtE(data);
		return;
	}
	struct node *ins=(struct node*)malloc(sizeof(struct node));
	if(ins==NULL){
		cout<<"HEAP OVERFLOW"<<endl;
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

void showall(){
	if(start==NULL){
		cout<<"Empty List"<<endl;
		return;
	}
	struct node *temp=start;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void rev(struct node *temp){
	if(temp==NULL){
		return;
	}
		rev(temp->next);
		cout<<temp->data<<" ";
	
}

void showAllRev(){
	rev(start);
}


int main(){
	
	InsertAtB(0);
	InsertAtE(10);
	InsertAtE(20);
	InsertAtE(30);
	InsertAtE(40);
	InsertAtE(50);
	InsertAtIndex(58,3);
	
	showall();
	
	int i=count();
	cout<<i<<endl;
	
	showAllRev();
	
}
