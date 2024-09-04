#include<stdio.h>
//Q5-a
/*int main(){
int a,b,c,max;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
max=a;
else 
max=b;

if(max>c)
printf("%d is the greatest number",max);
else
printf("%d is the greatest number",c);
return 0;
}*/


Q5-b
int main(){
int a,b,c,max;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
(a>b)?(a>c)?(max=a):(max=c):(b>c)?(max=b):(max=c);
printf("%d is the greatest number", max);
return 0;
}









