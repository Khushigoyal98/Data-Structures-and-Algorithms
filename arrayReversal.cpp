#include<iostream>
using namespace std;


void Rev(int arr[],int n){
	
	int j=n-1;
	for(int i=0;i<n/2;i++){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j--]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr1[]={1,2,3,4,5};
	Rev(arr1, 5);
}

