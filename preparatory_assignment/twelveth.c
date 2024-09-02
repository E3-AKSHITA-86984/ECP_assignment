// Program to reverse letters present in a given string
#include<stdio.h>
#include<string.h>
int main(){
    char name[]="Naresh";
    char temp;
    int i,j;
    i=0;
    j=strlen(name)-1;
    printf("%d", j);
    printf("Initially string was: %s", name);
    while(i<j){
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        i++;
        j--;
    }
    printf("After reversal:%s", name);
    return 0;
    
}
