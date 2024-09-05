#include<stdio.h>
int main(){
	char ch;
	int ascii;
	printf("Enter a character:");
	scanf("%c",&ch);
	printf("The ASCII value of character in decimal is %d\n",ch);
       printf("The ASCII value of character in octal is %o\n",ch);
	
       printf("The ASCII value of character in hexadecimal is %x\n",ch);
       printf("Enter the ASCII value for the character you wiah to print:");
        scanf("%d",&ascii);
       printf("The character for %c is %d", ascii, ascii);


}

