#include <stdio.h>
int mera_atoi(const char *str) {
    int result = 0;
    int sign = 1;

    while (*str == ' ') {
        str++;
    }

    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}

int main() {
	
	printf("ENter the string");
    char str[40];
	scanf("%39s",str);
    int num = mera_atoi(str);
    printf("The integer value is: %d\n", num);
    return 0;
}

