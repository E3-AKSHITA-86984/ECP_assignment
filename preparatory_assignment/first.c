// Program to input n numbers on command line argument
#include <stdio.h>

int main() {
    int n, i, r, temp=0;
    printf("Write the total number of values you want to compare:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Input the %d value:", i);
        scanf("%d", &r);
        if(r>temp){
            temp=r;
        }
    }
    printf("The greatest value is:%d", temp);
}
