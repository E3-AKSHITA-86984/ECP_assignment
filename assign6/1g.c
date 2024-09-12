#include<stdio.h>
#include<string.h>
int main(){
char *ptr;
char str1[40]="PURPLE IS MY FAVOURITE COLOUR";
ptr=strchr(str1,'L');
printf("\n%d",ptr);
return 0;
}

