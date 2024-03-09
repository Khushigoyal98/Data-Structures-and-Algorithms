/* Count Sort Algorithm

Avg case: O(n)
Not Adaptive: Best case O(n) for already sorted array
stable: order maintained
*/


#include<iostream>
#include<stdlib.h>
using namespace std;

void CountSort(int arr[],int n){
	
	int min=arr[0];
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	
	for(int i=0;i<n;i++){
	arr[i]=arr[i]+abs(min);
	}
	
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[max]<arr[i]){
			max=i;
		}
	}
	
	int x=arr[max]+1;
	int count[x]={0};
	int sol[n]={0};
		
	for(int i=0;i<x;i++){
		count[i]=0;
	}	
		
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	
	for(int i=1;i<x;i++){
		count[i]=count[i]+count[i-1];
	}
	
	for(int i=0;i<n;i++){
		sol[count[arr[i]]-=1]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=sol[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=arr[i]-abs(min);
	}
}

void display(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[]={-19,46,90,-100,349,80,-170,123};
	int n=8;
	cout<<"Before sorting: "<<endl;
	display(arr,8);
	cout<<endl;
	cout<<"After Sorting: "<<endl;
	CountSort(arr,n);
	display(arr,n);
}
