#include<stdio.h>
//without using global variable
 int res;

int calculate(int num1,int num2, int *res){
*res=num1*num2;
return num1+num2;
}


int main(){
int num1,num2;
printf("Enter an operand");
scanf("%d",&num1);
printf("\nEnter another operand");
scanf("%d",&num2);
int sum=calculate(num1,num2,&res);
printf("\nSum:%d",sum);
printf("\nProduct:%d",res);
return 0;
}

