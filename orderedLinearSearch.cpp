#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	int target;
	cout<<"Enter value to be searched:  "<<endl;
	cin>>target;
	for(int i=0;i<=n;i++){
		if(arr[i]==target){
			cout<<"Element found at index: "<<i;
			break;
		}else if(arr[i]>target){
			cout<<"Element not found!"<<endl;
		}
	}
	cout<<"Element not found!";
	return 0;
}
