#include<stdio.h>
int main(){
	int num;
	printf("Enter your number:");
	scanf("%d", &num);
        printf("The number in char is %c\n",num);
	printf("The number in octal is %o\n", num);
	printf("The number in hexadecimal is %x", num);
}

