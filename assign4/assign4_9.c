#include<stdio.h>

void prime_not(int n){
int i,count=0;
for(i=1;i<=n;i++){
if(n%i==0){
count=count+1;
}
}
if(count>2){
printf("Number is not a prime number.");
}
else{
printf("Number is a prime number.");
}
}

void prime_range(int m){
int i,count=0,j;
for(i=1;i<=m;i++){
  for(j=1;j<=i;j++){
if(i%j==0){
count=count+1;
}
}
if(count<=2){
printf(" %d",i);
}
}
}




int main(){
int i,n,m;
printf("Enter one choice:1.To find if a given number is prime.\n2.To print prime numbers in a given range.");
scanf("%d",&i);
switch(i){
case 1: printf("Enter a number:");
scanf("%d",&n);
prime_not(n);
break;

case 2:printf("Enter the range:");
scanf("%d",&m);
prime_range(m);
break;

default: printf("INVALID CHOICE ENTERED");
break;}
return 0;
}
