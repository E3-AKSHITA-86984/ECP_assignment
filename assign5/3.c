#include<stdio.h>
int main(){
int arr[5];
int n=4,temp,j=0;
for(int i=0;i<=4;i++){
      printf("arr[%d]=",i);
      scanf("%d",&arr[i]);
}
while(n>j){
	temp=arr[n];
	arr[n]=arr[j];
	arr[j]=temp;
	n--;
	j++;
	}
	for(int i=0;i<=4;i++){
	printf(" %d",arr[i]);
}
return 0;
}




/*for(j=0;j<n;j++){
n=n-j;
temp=arr[n];
arr[n]=arr[j];
arr[j]=temp;
n--;
j++;
}  */
