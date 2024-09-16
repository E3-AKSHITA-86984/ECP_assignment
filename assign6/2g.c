#include<stdio.h>
int mera_strchr(const char *str,int ch){
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]==ch){
			return (str+i);
		}
	}
}
	



int main(){
	char str[100];
	printf("enter a string\n");
	scanf("%s",str);
	char ch;
	printf("Enter a character\n");
	scanf("%*c%c",&ch);
	int ptr=mera_strchr(str,ch);
	printf("\n%u",ptr);
	return 0;
	}
