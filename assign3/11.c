#include<stdio.h>
int main(){
int num,i,fact=1;
printf("Enter a number");
scanf("%d",&num);
for(i=1;i<=num;i++){
fact=fact*i;
}
printf("\nANS:%d",fact);

return 0;
}
