/* Insertion Sort Algorithm

Avg case: O(n2)
Adaptive: Best case O(n) for already sorted array
stable: order maintained
*/


#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key; 
	}
}

void display(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[10]={7,-2,0,1,4,9,11,3,5,10};
	int n=10;
	InsertionSort(arr,n);
	display(arr,n);
}
