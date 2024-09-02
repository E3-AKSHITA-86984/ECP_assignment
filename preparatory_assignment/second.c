// Program to calculate factorial of a number
#include<stdio.h>
int main(){
    int n, i, mul=1;
    printf("Write the number you want to find factorial of:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        mul=mul*i;
    }
    printf ("The factorial of %d is:%d", n, mul);
}

