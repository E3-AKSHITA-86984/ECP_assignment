#include <stdio.h>
#include <string.h>
void removeOccurrences(const char *string1, char *string2) {
    int i, j;
    int len2 = strlen(string2);
    int len1 = strlen(string1);
    for (i = 0; i < len2; i++) {
        for (j = 0; j < len1; j++) {
            if (string2[i] == string1[j]) 
                for (int k = i; k < len2 - i; k++) {
                    string2[k] = string2[k + 1];
                }
                string2[len2 - 1] = '\0';
                len2--;
                i--;
                break;
            }
        }
		
    printf("Modified string2:\n%s\n", string2);
    }


int main() {
    char string1[50];
    char string2[50];
    printf("Enter the characters to remove (string1):\n");
    scanf("%s", string1);

    printf("Enter the string to modify (string2):\n");
    scanf("%s", string2);

    removeOccurrences(string1, string2);

    return 0;
}

