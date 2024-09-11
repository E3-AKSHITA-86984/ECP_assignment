#include<stdio.h>
int fact(int num){
if(num==0){
return 1;
}
else{
num=num*fact(num-1);
}
}




int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
int res=fact(num);
printf("Factorial of %d is %d",num,res);
return 0;
}
