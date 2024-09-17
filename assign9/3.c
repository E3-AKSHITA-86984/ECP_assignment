#include<stdio.h>
void write_file(FILE *fs,FILE *fd){
char ch[20];
while(fgets(str, sizeof(str), fp) != NULL)
		fputc(ch, fd);

		fclose(fs);
		fclose(fd);
		}



int main(){
	FILE *fs = fopen("one.txt", "r");
	FILE *fd = fopen("text.txt", "w");
write_file(fs,fd);
return 0;
}
