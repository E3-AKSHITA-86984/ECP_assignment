#include<stdio.h>
int found(int arr[], int high, int found,int key);
int main(){
int key,mid;
int arr[10]={12,34,45,56,67,78,89,90,100,1};
int low=0;
int high=9;
printf("Enter the key:");
scanf("%d",&key);
int res=found(arr,high,low,key);
if(res!=-1){
printf("Key found at %d",res);
}
else
printf("Key nout found");
return 0;
}

int found(int arr[],int high,int low,int key){
while(low<=high){
	int mid=low+high/2;
 	
	if(key<arr[mid]){
 		high=mid-1;
 	}

	else if(key>arr[mid]){
	  low=mid+1;
	 }

	 else if(key==arr[mid]){
	 return mid;
	 }
	 else
	 return -1;
	 }
	}

     

