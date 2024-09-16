#include<stdio.h>
void accept(int arr[5][5]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("enter arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
			}
			printf("\n");
		}
	}

void add_arr(int arr[5][5],int arr1[5][5]){
	int arr3[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		arr3[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	print_arr(arr3);
}

void sub_arr(int arr[5][5],int arr1[5][5]){
	int arr3[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		arr3[i][j]=arr[i][j]-arr1[i][j];
		}
	}
	print_arr(arr3);
}



void mul_arr(int arr[5][5],int arr1[5][5]){
int mul[5][5];
int i,j,k;
for( i=0;i<5;i++){
	for( j=0;j<5;j++){
		mul[i][j]=0;
		for(k=0;k<5;k++){
		mul[i][j]+=arr[i][k]*arr1[k][j];
		}
	}
}
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
			

void print_arr(int arr[5][5]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("  %d",arr[i][j]);
			}
			printf("\n");
		}
}

	

int main(){
	int arr[5][5];
	int arr1[5][5];
	accept(arr);
	accept(arr1);
	add_arr(arr,arr1);
	sub_arr(arr,arr1);
	mul_arr(arr,arr1);

return 0;
}
