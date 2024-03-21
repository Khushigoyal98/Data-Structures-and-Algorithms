// Min Heapify algorithm

#include<iostream>
using namespace std;

void show(int x[],int n,int i){
   
    int l=i*2+1;
    int r=i*2+2;
    int min=i;
    
    if(r<n){
    	if(x[l]>x[r]){
    		min=r;
		}else{
			min=l;
		}
	}
	else if(l<n){
		min=l;
	}
   	
   	if(x[min]<x[i]){
   		int temp=x[min];
   		x[min]=x[i];
   		x[i]=temp;
   		
   		show(x,n,min);
	   }
   
   
}

void showloop(int x[],int n){
    for(int i=n/2-1;i>=0;i--){
        show(x,n,i);
    }
}

int main()
{
    int x[]={10,9,8,7,6,5,4,3,2,1};
    showloop(x,10);
   
    for(int i=0;i<10;i++){
        cout<<i[x]<<" ";
    }
}
