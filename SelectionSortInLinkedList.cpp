//Selection Sort on Linked Lists

#include<iostream>
#include<stdbool.h>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;

void InsertAtB(int data){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"Heap Overflow"<<endl;
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
		cout<<"Heap Overflow"<<endl;
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

void SelectionSort(){
	if(start==NULL||start->next==NULL){
		return;
	}
	struct node *temp=start;
	
	while(temp->next!=NULL){
		struct node *min=temp;
		struct node *ptr=temp->next;
		while(ptr!=NULL){
			if(min->data > ptr->data){
				min=ptr;
			}
			ptr=ptr->next;
		
			
		}
		if(temp!=min){
			int x=temp->data;
			temp->data=min->data;
			min->data=x;
		}
		temp=temp->next;
	}
}

int main(){
	
	InsertAtB(70);
	InsertAtE(10);
	InsertAtE(40);
	InsertAtE(24);
	InsertAtE(98);
	InsertAtE(36);
	InsertAtIndex(58,3);
	
	SelectionSort();
	
	showall();
	
}

























