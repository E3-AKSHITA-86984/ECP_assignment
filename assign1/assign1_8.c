#include<stdio.h>
int main(){
int a,b,c,x=3;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
printf("The average of these three numbers is:%lf", (a+b+c)/(float)x);
return 0;
}
