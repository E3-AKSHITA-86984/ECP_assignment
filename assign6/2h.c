#include <stdio.h>
#include <string.h>

const char* mera_strstr(const char *str, const char* ch) {
    int lenStr = strlen(str);
    int lenCh = strlen(ch);

    if (lenCh == 0) {
        return str; 
    }

    for (int i = 0; i <= lenStr - lenCh; i++) {
       int j;
        for (j = 0; j < lenCh; j++) {
            if (str[i + j] != ch[j]) {
                break;
            }
        }
        if (j == lenCh) {
            return &str[i];
        }
    }
    return NULL;  
}

int main() {
    char str[100];
    char ch[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    printf("Enter a substring: ");
    scanf("%s", ch);   

    const char *ptr = mera_strstr(str, ch);
    if (ptr != NULL) {
        printf("Substring found at index: %ld\n", ptr - str);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}

