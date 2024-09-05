#include<stdio.h>
int main(){
int num,a,b,c,d,temp;
temp==num;
printf("Enter a number:");
scanf("%d",&num);
d=num%10;
num=num/10;
c=num%10;
num=num/10;
b=num%10;
num=num/10;
a=num%10;
printf("Representing the face value of the entered number:%d%4d%4d%4d\n", a,b,c,d);
printf("Representing the place value:%d=%d+%d+%d+%d\n",temp,a*1000,b*100,c*10,d);
printf("Reversing the number:%d%d%d%d", d,c,b,a);
return 0;
}
