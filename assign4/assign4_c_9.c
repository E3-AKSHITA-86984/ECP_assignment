#include<stdio.h>
int flag;
void calculate(int num1,int num2, int op, int *res){
if(op==1){
*res=num1+num2;
}
else if(op==2){
*res=num1-num2;
}
else if(op==3){
*res=num1*num2;
}
else if(op==4){
if(num2==0){
flag=1;
printf("DIVISION BY ZERO ERROR");
}
else
*res=num1/num2;
}
else{;
printf("INVALID OPERATOR ENTERED");
}
}




int main(){
int num1,num2,res,op;
flag=0;
printf("Enter the first operand:");
scanf("%d",&num1);
printf("\nEnter number for operator out of the four:1.'+'\n2.'-'\n3.'*'\n4.'/'");
scanf("%d`",&op);
printf("\nEnter the second operand:");
scanf("%d",&num2);
 calculate(num1,num2,op,&res);
 if(flag==0){
printf("Result:%d",res);
}
else{
flag=0;
}
return 0;
}
