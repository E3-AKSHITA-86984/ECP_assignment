#include<stdio.h>
void swap(int *num1,int *num2){
int temp=*num1;
*num1=*num2;
*num2=temp;
printf("\nAfter swap: num1=%d\nnum2=%d",*num1,*num2);
}



int main(){
int num1,num2;
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
printf("Before swap:num1=%d\nnum2=%d",num1,num2);
swap(&num1,&num2);
return 0;
}
