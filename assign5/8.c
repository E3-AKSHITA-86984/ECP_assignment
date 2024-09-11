#include<stdio.h>
int main(){
int key,found=0;
int arr[10]={12,23,34,45,56,67,78,89,90,12};
printf("Enter the key");
scanf("%d",&key);
for(int i=0;i<10;i++){
	if(arr[i]==key){
		printf("\nKey found at:%d",i);
		found=1;
		break;
		}
	}
	if(!found){
		printf("Key not found");
		}
	
return 0;
}
