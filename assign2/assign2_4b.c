#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
a>b?printf("%d is the greater number",a):printf("%d is the greater number",b);
return 0;
}
