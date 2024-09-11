#include<stdio.h>
void binari(int num){
if(num>1){
binari(num/2);
}
else
printf("%d",num/2);
}


int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
binari(num);
return 0;
}
