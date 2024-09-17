#include <stdio.h>

void printNames(char *names[], int count) {
for (int i = 0; i < count; ++i) {
printf("%s\n", names[i]);
}
}

int main(int argc, char *argv[]) {
if (argc < 2) {
printf("names entered in wrong format\n");
return 1;
}

int numNames = argc - 1;
printf("Names:\n");
printNames(argv + 1, numNames);

return 0;
}

