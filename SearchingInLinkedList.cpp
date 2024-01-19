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



void LinearSearch(int data){
	int i=-1, flag=0;
	if(start==NULL){
		cout<<"Element "<<data<<" not found!"<<endl;
	}
	struct node *temp=start;
	while(temp!=NULL){
		i++;
		if(temp->data==data){
			cout<<"Element "<<data<<" found at index "<<i<<endl;
			flag=1;
		}
		temp=temp->next;
	}
	if(flag==0){
		cout<<"Element "<<data<<" not found!"<<endl;
	}
}


int main(){
	
	InsertAtB(0);
	InsertAtB(10);
	InsertAtB(20);
	InsertAtB(20);
	InsertAtB(40);
	InsertAtB(50);

	LinearSearch(50);
	LinearSearch(100);
	
}
