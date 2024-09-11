#include<stdio.h>
int a=1,b=1;
int fibb(void){
int a,b,c;
c=a+b;
a=b;
b=c;
printf("%d %d",a,b);
return c;
}


int main(){
int num,i;
printf("Enter the number upto which you want the series:");
scanf("%d",&num);
for(i=1;i<=num;i++){
printf("%d %d",a,b);
int c=fibb();
printf(" %d",c);
}
return 0;
}
