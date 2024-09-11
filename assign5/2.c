#include<stdio.h>
void enter_array(int arr[]){
	for(int i=0;i<=5;i++){
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
	}
}

void print_array(int arr[]){
 	for(int i=0;i<=5;i++){
		printf("%d",arr[i]);
		printf("\n");
		}
	}


int main(){
int arr[5];
enter_array(arr);
print_array(arr);
return 0;
}
	
