#include<stdio.h>
int main(){
int num1,num2, rem;
printf("Enter the first number:");
scanf("%d",&num1);
printf("\n Enter the second number:");
scanf("%d",&num2);

while(num2>0){
	rem=num1%num2;
printf("\n%d %% %d=%d", num1,num2,rem); 
	num1=num2;
	num2=rem;
	}
	printf("%d",num1);
return 0;
}
	
