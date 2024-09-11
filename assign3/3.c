#include <stdio.h>

int main() {
    enum choice { EXIT, ADD, REV, PAL, ARM };
    
    int ch, num, temp, rem, sum;

    printf("Enter your choice:\n");
    printf("0: EXIT\n");
    printf("1: Calculate sum of digits of integer.\n");
    printf("2: Reverse the number.\n");
    printf("3: To check if number is palindrome.\n");
    printf("4: To check if number is Armstrong.\n");

    scanf("%d", &ch);

    if (ch == EXIT) {
        printf("You entered exit\n");
        return 0;
    }

    printf("Enter the number: ");
    scanf("%d", &num);
    
    temp = num;
    sum = 0;
    
    switch (ch) {
        case ADD:
            while (num != 0) {
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            printf("ANS: %d\n", sum);
            break;
        
        case REV:
            num = temp;
            while (num != 0) {
                rem = num % 10;
                sum = (sum * 10) + rem;
                num = num / 10;
            }
            printf("ANS: %d\n", sum);
            break;
        
        case PAL:
            num = temp;
            int reversed = 0;
            while (num != 0) {
                rem = num % 10;
                reversed = (reversed * 10) + rem;
                num = num / 10;
            }
            if (reversed == temp) {
                printf("Number is a palindrome number\n");
            } else {
                printf("Number is not a palindrome number\n");
            }
            break;
        
        case ARM:
            num = temp;
            sum = 0;
            while (num != 0) {
                rem = num % 10;
                sum = sum + (rem * rem * rem);
                num = num / 10;
            }
            if (sum == temp) {
                printf("Number is an Armstrong number\n");
            } else {
                printf("Number is not an Armstrong number\n");
            }
            break;
        
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

