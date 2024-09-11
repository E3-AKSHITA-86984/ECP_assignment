//function to calculate factorial of a given number
#include<stdio.h>

int fact(int num){
int i,res=1;
if(num==0)
return 0;
else{
for(i=num;i>=1;i--){
res=res*i;
}
return res;
}
}


int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
int res=fact(num);
printf("\nFactorial of %d is %d",num, res);

return 0;
}
