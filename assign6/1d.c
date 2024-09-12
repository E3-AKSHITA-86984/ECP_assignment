#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	char str1[10];
	printf("Enter the string:");
	scanf("%[^\n]s",str);
	printf("Enter the second string:");
	scanf("%s",str1);
	int len=strcmp(str,str1);
	if(len==0){
	printf("Both strings are equal");
	}
	return 0;
	}
