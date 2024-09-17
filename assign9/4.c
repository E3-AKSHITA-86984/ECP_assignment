#include<stdio.h>
void write_file(FILE *fs,FILE *fd){
char str[20];
while(fgets(str, sizeof(str), fs) != NULL)
		fputc(str, fd);

		fclose(fs);
		fclose(fd);
		}



int main(int argc, char *argv[]){
if (argc != 3) {
        fprintf(stderr, "Usage: %s <source file> <destination file>\n", argv[0]);
        return 1;
    }
    FILE *fs = fopen(argv[1], "r");
	FILE *fd = fopen(argv[2], "w");

write_file(fs,fd);
return 0;
}
