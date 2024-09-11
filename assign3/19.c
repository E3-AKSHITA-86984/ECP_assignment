#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter the lower range");
	scanf("%d",&num1);
	printf("Enter the upper range");
	scanf("%d",&num2);
    for(int i=num1;i<=num2;i++){
		for(int j=1;j<=10;j++){
			printf("%d\n",i*j);
			}
			printf("\n");
		}
		return 0;
	}
