#include<stdio.h>
int main(){
	int num,i=1,res=1;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0){
		printf("\nFactorial=1");
	}
	else if(num==1){
		printf("Factorial=1");
	}
	else{
		while(i<=num){
		res=res*i;
		i++;
	}
	printf("Factorial:=%d",res);
	}
return 0;
}
