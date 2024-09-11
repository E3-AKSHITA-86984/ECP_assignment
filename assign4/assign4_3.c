//function to implement four function calculator


#include<stdio.h>

int add(int a, int b){
return a+b;
}

int sub(int a, int b){
return a-b;
}

int mul(int a, int b){
return a*b;
}

int div(int a, int b){
if(b==0){
printf("DIVISION BY ZERO ERROR");
}
else{
return a/b;
}
}



int main(){
int num1,num2,res;
char op;
printf("Enter an operand:");
scanf("%d",&num1);
printf("\nEnter an operator out of +\n-\n*\n/:");
scanf("%*c%c",&op);
printf("\nEnter an operand:");
scanf("%d",&num2);
switch(op){
case'+':printf("%d+%d=%d",num1,num2,add(num1,num2)); 
break;
case'-':printf("%d-%d=%d",num1,num2,sub(num1,num2)); 
break;
case'*':printf("%d*d=%d",num1,num2,mul(num1,num2)); 
break;
case'/':printf("%d/%d=%d",num1,num2,div(num1,num2)); 
break;
default:printf("INVALID OPERATOR ENTERED");
break;
}
return 0;
}
