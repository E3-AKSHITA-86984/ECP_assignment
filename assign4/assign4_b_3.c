#include<stdio.h>

int gcd(int num1, int num2){
if(num1>num2){
return gcd(num1-num2,num2);
}
else if(num1<num2){
return gcd(num1,num2-num1);
}
else
return num1;
}

int main(){
int num1,num2;
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
int res=gcd(num1,num2);
printf("The GCD is:%d", res);
return 0;
}
