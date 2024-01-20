#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
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
temp->next=start;
temp->prev=NULL;
	if(start!=NULL){
		start->prev=temp;
	}else{
		end=temp;
	}
	start=temp;
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
	temp->next=NULL;
	temp->prev=end;
	end->next=temp;
	end=temp;
}

int count(){
	struct node *temp=start;
	int i=0;
	while(temp!=NULL){
		temp=temp->next;
		i++;
	}
	return i;
}

void InsAtIndex(int p,int data){
	if(p<=0){
		InsAtB(data);
		return;
	}else if(p>=count()){
		InsAtE(data);
		return;
	}
	struct node *ins=(struct node*)malloc(sizeof(struct node));
	
	if(ins==NULL){
		cout<<"Heap Exhausted"<<endl;
		return;
	}
	struct node *temp=start;
	for(int i=0;i<p-1;i++){
		temp=temp->next;
	}
	temp->next->prev=ins;
	ins->prev=temp;
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
	
}

void showAllRev(){
		if(start==NULL){
		cout<<"Empty List"<<endl;
		return;
	}
	struct node *temp=end;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
}

int main(){
	InsAtB(50);
	InsAtB(40);
	InsAtB(30);
	InsAtB(20);
	InsAtB(10);
	InsAtE(60);
	InsAtIndex(2,80);
	
	showall();
	cout<<endl;
	showAllRev();
}
