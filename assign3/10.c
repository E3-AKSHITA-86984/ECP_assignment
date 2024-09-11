#include<stdio.h>
int main(){
int num,i;
printf("Enter a number:");
scanf("%d",&num);
printf("\nEnter the value upto which the table needs to be printed:");
scanf("%d",&i);
for(int n=1;n<=i;n++){
printf("%d * %d = %d",num,n,num*n);
printf("\n");
}
return 0;
}
