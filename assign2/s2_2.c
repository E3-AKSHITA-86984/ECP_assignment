#include<stdio.h>
int main(){
char op,ch;
float num1,num2;
printf("Enter value 1:");
scanf("%f",&num1);
printf("Enter the operator out of the following: '+','-','*','/'");
scanf("%*c%c", &op);
printf("Enter the second value:");
scanf("%f",&num2);
switch(op)
{
case'+':printf("%f+%f=%f",num1,num2,num1+num2);
break;
case'-':printf("%f+%f=%f",num1,num2,num1-num2);
break;
case'*':printf("%f+%f=%f",num1,num2,num1*num2);
break;
case'/':if(num2==0)
printf("INVALID INPUT");
else
printf("%f/%f=%f",num1,num2,num1/num2);
break;
default: printf("Invalid operater entered");
break;
}
return 0;
}
