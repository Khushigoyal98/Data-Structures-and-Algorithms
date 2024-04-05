/*
Heap Sort Algorithm:

Avg Case:O(nlogn)
Adaptive: Not Adaptive
Stable: Not Stable
*/

#include<iostream>
using namespace std;

void show(int arr[],int n,int i){
	int l=i*2+1;
	int r=i*2+2;
	int max=i;
	if(r<n){
		if(arr[r]>arr[l]){
			max=r;
		}else{
			max=l;
		}
	}else if(l<n){
		max=l;
	}
	
	if(arr[i]<arr[max]){
		int temp=arr[max];
		arr[max]=arr[i];
		arr[i]=temp;
		
		show(arr,n,max);
	}	
}


void heapify(int arr[], int n){
	for(int i=n/2-1;i>=0;i--){
		show(arr,n,i);
	}
}

void Delete(int arr[],int n){
	for(int i=n-1;i>0;i--){
		int temp=arr[i];
		arr[i]=arr[0];
		arr[0]=temp;
		
		show(arr,i,0);  //heapify(arr,i);  
	}
}

int main(){
	
	int arr[]={8,3,4,7,2,5,-4,0,6,-1};
	int n=10;
	
	heapify(arr,n);
	Delete(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
