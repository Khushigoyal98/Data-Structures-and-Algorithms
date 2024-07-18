/*
Quick Sort Algorithm:

Worst case: O(n2) => When we have already sorted array
Avg case and Best case: O(nlogn)
Not Adaptive: Worst case
Stable: Order not maintained
*/

#include<iostream>
using namespace std;

int partition(int x[],int i,int n){
	int p=i;
	int t;
	int pi=x[n];
	while(i<n){
		if(x[i]<pi){
			t=x[i];
			x[i]=x[p];
			x[p]=t;
			p++;
		}
		i++;
	}
	x[n]=x[p];
	x[p]=pi;
	
	return p;
}

void quickSort(int x[],int i,int n){
	
	if(i>=n) return;
	int p =partition(x,i,n);
	quickSort(x,i,p-1);
	quickSort(x,p+1,n);
}

int main(){
	int x[]={35,33,42,10,14,19,27,44,26,31};
	int n=9;
	quickSort(x,0,n);
	for(int i=0;i<=n;i++){
		cout<<x[i]<<" ";
	}
}
