#include<stdio.h>
#include<string.h>
int main(){
char str1[40]="PURPLE IS MY FAVOURITE COLOUR";
char str2[40];
strncpy(str2,str1,5);
printf("\n%s",str2);
return 0;
}

