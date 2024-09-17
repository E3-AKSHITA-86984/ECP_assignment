#include<stdio.h>
void write_file(FILE *fs,FILE *fd){
char ch;
while((ch = fgetc(fs)) != EOF)
		fputc(ch, fd);
		while((ch = fgetc(fd)) != EOF)
		printf("%c", ch);

		fclose(fs);
		fclose(fd);
		}



int main(){
	FILE *fs = fopen("one.txt", "r");
	FILE *fd = fopen("text.txt", "w");
write_file(fs,fd);
return 0;
}
