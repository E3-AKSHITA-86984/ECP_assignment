#include<stdio.h>
int main(){
 int arr[5],i,sum=0;
 for(i=0;i<=4;i++){
 	printf("%d. Enter the marks:",i+1);
	scanf("%d",&arr[i]);
	}
for(i=0;i<=4;i++){
	sum=sum+arr[i];
}
	printf("Total: %d",sum);
	printf("\nAverage:%d",sum/5);
return 0;
}

