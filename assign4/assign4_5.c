//print a character given number of times

#include<stdio.h>
void print_char(char ch){
printf("%c\n",ch);
}



int main(){
int i,j;
char ch;
printf("Enter the character:");
scanf("%c",&ch);
printf("\nEnter the number of times to print the character:");
scanf("%d",&i);
for(j=1;j<=i;j++){
 print_char(ch);
}
return 0;
}
