// Program to display multiplication table of a given number
#include <stdio.h>
int main() {
 int n, r, i;
 printf("Enter the number whose table needs to be displayed:");
 scanf("%d",&n);
 printf("Enter the number upto which the table of %d needs to be displayed:", n);
 scanf("%d", &r);
 for(i=1;i<=r;i++){
     int mul=1;
     mul=n*i;
     printf("%dx%d=%d\n", n,i,mul);
 }
 return 0;
}
