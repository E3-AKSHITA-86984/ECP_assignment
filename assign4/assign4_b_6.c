#include<stdio.h>
void hexa(int num){
printf("The number is hexadecimal is:%x",num);
}

int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
hexa(num);

return 0;
}
