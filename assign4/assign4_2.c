//Calculate power
#include<stdio.h>
int power(int b,int e){
int i,j=1;
if(e==0){
printf("Ans:1");
}
else{
for(i=1;i<=e;i++){
 j=j*b;
 }}
 return j;
 }






int main(){
int base,exp;
printf("Enter the base:");
scanf("%d",&base);
printf("\nEnter the exponent:");
scanf("%d",&exp);
int res=power(base,exp);
printf("\nAns:%d",res);
 return 0;
 }
