#include<iostream>
using namespace std;
int main(){
    int arr[]={5,7,3,2,0,1,5,7};
    int n=8;
    int x,count=0;
    cout<<"Enter value to be searched: "<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found at index: "<<i;
            count++;
            }
    }
    if(count==0){
    cout<<"Element not found!"<<endl;	
	}
    return 0;
}
