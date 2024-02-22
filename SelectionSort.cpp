/*Selection Sort

Avg case - O(n2)
Selection sort is not adaptive since there is no benefit in case of an already sorted array.
Selection sort is not stable since order is not maintained.
*/

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		if(minIndex!=i){
			int temp=arr[i];
			arr[i]=arr[minIndex];
			arr[minIndex]=temp;
		}
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
	selectionSort(arr,n);
	display(arr,n);
}
