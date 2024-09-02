// Program to detect if a character is uppercase, lower case, number or a symbol
#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    printf("Enter your character:");
    scanf("%c", &ch);
    if(isupper(ch)){
        printf("uppercase detected");
    }
    else if(islower(ch)){
        printf("lower case detected");}
    else if(isdigit(ch)){
        printf("number detected");
    }
    else
    printf("character is a symbol");
}

