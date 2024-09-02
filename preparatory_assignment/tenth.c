// Program to sort names of student
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void *a, const void *b){
    return strcmp(*(const char**)a, *(const char **)b);
}
int main(){
    char nameOfStudents[10][50];
    char *namePointer[10];
    int n, i;
    printf("Enter the number of names:");
    scanf("%d", &n);
    if(n>10){
        n=10;
    }
    for(i=0; i<n; i++){
        printf("Enter the name number %d:", i+1);
        scanf("%49s", nameOfStudents[i]);
        namePointer[i]=nameOfStudents[i];
    }
    qsort(namePointer, n, sizeof(char*), compare);
    
    for(i=0; i<n; i++){
        printf("%s\n", namePointer[i]);
    }
    
}

