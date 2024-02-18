/* Bubble Sort Algorithm

Avg case: O(n2)
Can be made adaptive using flag :O(n)
stable: order maintained
*/


#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
	int flag;
	for(int i=0;i<n-1;i++){
		flag=0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0){
			break;
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
	BubbleSort(arr,n);
	display(arr,n);
}
