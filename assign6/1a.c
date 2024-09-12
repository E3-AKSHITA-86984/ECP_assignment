#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	printf("Enter the string:");
	scanf("%[^\n]s",str);
	int len=strlen(str);
	printf("\n%d",len);
	return 0;
	}
