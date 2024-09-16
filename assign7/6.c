#include<stdio.h>
#include<stdlib.h>
	void dynamic(){
	int length;
	printf("Enter the length:");
	scanf("%",&length);
int **ptr=(int**)malloc(length*sizeof(int*));
for(int i=0;i<length;i++){
	ptr[i]=(int*)malloc(length*sizeof(int));
	
}


free_arr(ptr,length);
}

void free_arr(int**ptr,int length){
for(int i=0; i<length;i++){
	free(ptr[i]);
	}
	free(ptr);
}

int main(){
	dynamic();
	return 0;
}
