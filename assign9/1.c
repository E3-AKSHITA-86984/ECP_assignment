#include<stdio.h>
int main(){
	char ch;
	FILE *fs=fopen("one.txt","r");
	while((ch=fgetc(fs))!=EOF){
		printf("%c",ch);
		}
fclose(fs);
return 0;
}
