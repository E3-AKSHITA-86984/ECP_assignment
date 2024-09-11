#include<stdio.h>
int find_max(int arr[],int i){
 int max=arr[0];
 for(int n=1;n<i;n++){
 	if(max<arr[n]){
	max=arr[n];
	}}
	return max;
	}


int main(){
int i,j;
printf("Enter the range of array:");
scanf("%d",&i);
int arr[i];
for(j=0;j<i;j++){
printf("arr[%d]=",j);
scanf("%d",&arr[j]);
}
int res=find_max(arr,i);
printf("Max=%d",res);
return 0;
}
