#include<stdio.h>
#include<string.h>
int main(){
char str1[40]="PURPLE IS MY FAVOURITE COLOUR";
char str2[40]="IS";
char*ptr=strstr(str1,str2);
printf("\n%d",ptr);
return 0;
}

