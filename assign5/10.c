#include<stdio.h>
int linear_ser(int arr[]){
int found=0;
int i,key;
printf("Enter the key");
scanf("%d",&key);
for( i=0;i<10;i++){
	if(arr[i]==key){
		found=1;
		return i;
		}

		
	}


	if(!found){
	   return NULL;
		}
	
	}
	

int main(){
int key,found=0;
int arr[10]={12,23,34,45,56,67,78,89,90,12};
int address=linear_ser(arr);
if(address!=NULL){
printf("Result:%d",address);
}
else{
printf("Key not found");
}
	
	
return 0;
}
