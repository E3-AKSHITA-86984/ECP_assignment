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
	accept(arr);
	print_arr(arr);
return 0;
}
