#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbres:");
scanf("%d%d%d",&a,&b,&c);
a>b?a>c?printf("%d is the greatest",a):printf("%d is the greatest", c):b>c?printf("%d is the greatest",b):printf("%d is the greatest",c);
return 0;
}
