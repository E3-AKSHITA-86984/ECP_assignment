#include<stdio.h>
int main(){
float num1,num2;
double res;
printf("Enter two numbers;");
scanf("%f%f",&num1, &num2);
if(num2==0){
printf("ERROR:DIVIDER IS ZERO");
}
else
{ res=num1/num2;
printf("%f/%f=%lf",num1,num2,res);
}
return 0;
}
