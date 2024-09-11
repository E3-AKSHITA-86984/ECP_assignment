#include<stdio.h>
int main(){
int n,temp;
printf("Enter the index of array");
scanf("%d",&n);
int arr[n];
for(int m=0;m<n;m++){
printf("arr[%d]=",m);
scanf("%d",&arr[m]);
}

for(int i=0;i<n-1;i++){
	for(int j=0;j<n-1-i;j++){
	if(arr[j]>arr[j+1]){
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
	}
}

for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}
