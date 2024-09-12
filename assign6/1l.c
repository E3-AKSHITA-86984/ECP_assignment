#include<stdio.h>
#include<string.h>
int main(){
char *ptr;
char str1[40]="PURPLE IS MY FAVOURITE COLOUR";
ptr=strtok(str1," ");
printf("%s",ptr);
return 0;
}
