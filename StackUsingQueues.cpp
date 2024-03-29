//Stack Using Queue


#include <iostream>
#include <stdbool.h>
#include <stdlib.h>
#define CAPACITY 5
using namespace std;

int f1 = -1;
int r1 = -1;
int f2 = -1;
int r2 = -1;
int queue1[CAPACITY];
int queue2[CAPACITY];

bool isEmpty1()
{
    if (f1 == -1 || f1 > r1)
    {	
		
        return true;
    }
    return false;
}

bool isEmpty2()
{
    if (f2 == -1 || f2 > r2)
    {
		
        return true;
    }
    return false;
}

bool isFull()
{
    if (r1 == CAPACITY - 1)
    {
        return true;
    }
    return false;
}

void enQueue(int data)
{

    if (isFull())
    {
        cout<<"Stack is Full";
        return;
    }
    if (f1 == -1)
    {	
		f1++;
    }
	while(!isEmpty1()){
		if(f2==-1){
			f2++;
		}
		queue2[++r2]=queue1[r1--];
	}

    queue1[++r1] = data;
	
	while(!isEmpty2()){
		if(f1=-1){
			f1++;
		}
		queue1[++r1]=queue2[r2--];
	}
	
}

void deQueue()
{

    if (isEmpty1())
    {
        cout<<"Stack is Empty";
        return;
    }
    f1++;
}

int peek()
{

    if (isEmpty1())
    {
        cout<<"Stack is Empty";
        exit(0);
    }
    return queue1[f1];
}

void printQueue()
{

    for (int i = r1; i >= f1; i--)
    {
        cout<<queue1[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    enQueue(5);
    enQueue(15);
    enQueue(20);
    enQueue(25);
	enQueue(30);
   
	printQueue();

    deQueue();
    deQueue();

    printQueue();

   cout<<"Element at first "<<peek();
}
