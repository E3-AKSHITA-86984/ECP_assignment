#include <stdio.h>
void checkx(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        int result = c ^ 32;

        printf("Entered char: '%c' ,ASCII: %d\n", c, (int)c);
        printf("Character after XOR with 32: '%c' (ASCII: %d)\n", result, result);
    } else {
        printf("The character '%c' is not an alphabet.\n", c);
    }
}

int main() {
    char ch1;
	printf("Enter a character");
	scanf("%c",&ch1);
	checkx(ch1);
    return 0;
}

