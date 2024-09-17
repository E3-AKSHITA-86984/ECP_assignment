#include <stdio.h>
#include <string.h>

void printNames(char *names[], int count) {
for (int i = 0; i < count; ++i) {
printf("%s\n", names[i]);
}
}

void sortNames(char *names[], int count) {
char *temp;
for (int i = 0; i < count - 1; i++) {
for (int j = i + 1; j < count; j++) {
if (strcmp(names[i], names[j]) > 0) {
temp = names[i];
names[i] = names[j];
names[j] = temp;
}
}
}
}

int main(int argc, char *argv[]) {
if (argc < 2) {
printf("names entered in wrong format\n");
return 1;
}

int numNames = argc - 1;
printf("Names before sorting:\n");
printNames(argv + 1, numNames);

sortNames(argv + 1, numNames);

printf("Names after sorting:\n");
printNames(argv + 1, numNames);

return 0;
}

