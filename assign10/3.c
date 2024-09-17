#include <stdio.h>
#include <stdlib.h>

void print_bin(char num)
{
    unsigned char mask = 0x80;
    printf("%d : ", num);
    while (mask)
    {
        if (num & mask)
            printf("1");
        else
            printf("0");
        mask = mask >> 1;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Values not entered correctly");
        return -1; 
    }

    int input = atoi(argv[1]);
    char num = (char)input;
    print_bin(num);

    return 0;
}

