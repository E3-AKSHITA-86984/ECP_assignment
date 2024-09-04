#include<stdio.h>
int main(){
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>=65&&ch<=90||ch>=97&&ch<=122){
printf("\n%c is a letter\n",ch);
if(ch>=65&&ch<=90){
printf("%c is is a uppercase letter\n",ch);
}
else{
printf("%c is an lower chase character",ch);
}
}
else if(ch>=48&&ch<=57){
printf("%c is a digit",ch);
}
else if(ch==32||ch==9||ch==13||ch==10){
if(ch==32){
printf("Entered character is a space");
}
else if(ch==9)
printf("Entered character is a tab");
else if(ch==13)
printf("Entered character is a carriage return");
else 
printf("Entered character is a new line character");
}
else
printf("Not recognized");
return 0;
}
