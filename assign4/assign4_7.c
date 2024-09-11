#include<stdio.h>
void fibb(int n){
int a=0,b=1,c,i;
printf("%d %d", a,b);
for(i=1;i<=n;i++){
printf("%d",a);
c=a+b;
a=b;
b=c;
printf(" %d",c);
}
}


int main(){
int num;
printf("Enter the number upto which you want the Fibonacci series:");
scanf("%d",&num);
fibb(num);
return 0;
}
