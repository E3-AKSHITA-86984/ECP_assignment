#include<stdio.h>
int flag=0;
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
return a/b;
}



int main(){
int num1,num2,res,a=1;
char op;
while(a!=0){
printf("Enter an operand:");
scanf("%d",&num1);
printf("\nEnter an operator out of +\n-\n*\n/:");
scanf("%*c%c",&op);
printf("\nEnter an operand:");
scanf("%d",&num2);

if(num2==0){
flag=1;
}
switch(op){
case'+':printf("%d+%d=%d",num1,num2,add(num1,num2)); 
break;
case'-':printf("%d-%d=%d",num1,num2,sub(num1,num2)); 
break;
case'*':printf("%d*%d=%d",num1,num2,mul(num1,num2)); 
break;


case'/': if(flag==1){
printf("DIVISION BY ZERO ERROR");
flag=0;
break;
}
else{
printf("%d/%d=%d",num1,num2,div(num1,num2));
break;
}
default:printf("INVALID OPERATPR ENTERED");
break;
}

printf("\nIf you wish to quit enter 0, else enter any other number:");
scanf("%d",&a);
if(a==0)
break;}
return 0;
}
