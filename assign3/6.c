#include<stdio.h>
int main(){
    int num,i=1;
	printf("Enter a number");
	scanf("%d",&num);
	while(i<num){
	if(num%i==0){
		printf("%2d",i);
		}
	i++;
	}
	return 0;
	}

