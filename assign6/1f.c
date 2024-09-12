#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	printf("Enter the string:");
	scanf("%[^\n]s",str);

	printf("\n%s",strrev(str));
	return 0;
	}
