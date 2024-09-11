#include<stdio.h>

int power(int base,int exp){
if(exp==0){
return 1;
}
else if(exp==1){
return base;
}
else{
int res=base*power(base,exp-1);
return res;
}
}


int main(){
int base,exp;
printf("Enter the base:");
scanf("%d",&base);
printf("\nEnter the exponent:");
scanf("%d",&exp);
int res=power(base,exp);
printf("ANS.%d",res);
return 0;
}
