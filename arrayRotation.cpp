#include<iostream>
using namespace std;
int main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int k;
	int n=10;
	cout<<"Enter the number of rotations: ";
	cin>>k;
	
	while(k>0){
		int last=arr[n-1];
		
		for(int i=n-1;i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[0]=last;
	    k--;
	}
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
}
