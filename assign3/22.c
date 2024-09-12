#include<stdio.h>
int main(){
int i,j;
// pattern 1
 for( i=1;i<=5;i++){
 	for(j=1;j<=i;j++){
		printf(" *");
		}
	printf("\n");
	}
	printf("\n \n");

//pattern 2

 for( i=1;i<=5;i++){
 	for(j=i;j<=5;j++){
		printf(" *");
		}
	printf("\n");
	}


//pattern 3
  for( i=1;i<=5;i++){
 	for(j=1;j<=i;j++){
		printf(" %d",j);
		}
	printf("\n");
	}

//pattern 4

  for(i=5;i>=1;i--){
 	for(j=5;j>=i;j--){
		printf(" %d",j);
		}
	printf("\n");
	}


return 0;
}
