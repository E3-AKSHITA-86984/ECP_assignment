#include<stdio.h>
int main(){
int num;
char ch;
printf("Enter a character:");
scanf("%c",&ch);
printf("\nEnter the number of time you want to print the character:");
scanf("%d",&num);
while(num!=0){
printf(" %c",ch);
num--;
}

return 0;
}
