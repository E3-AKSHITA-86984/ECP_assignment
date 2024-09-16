#include<stdio.h>
#include<string.h>
int main(){
int i,j,temp;
	char str[100];
	printf("Enter a string\n");
	scanf("%s",str);
	i=0;j=(strlen(str)-1);
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
		}
	printf("%s",str);
	return 0;
	}

