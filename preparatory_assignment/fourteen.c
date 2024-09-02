// Program to find if a string is palindrome
#include<stdio.h>
#include<string.h>
int compare(char name[], char name2[]){
   return strcmp(name, name2)==0;
}
int main(){

    char name2[50];
    char temp;
    int i,j;
    char name[]="naman";
    strcpy(name2,name);
    i=0;
    j=strlen(name)-1;
   
    printf("Initially string was: %s\n", name);
    
    while(i<j){
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        i++;
        j--;
    }
    printf("After reversal:%s\n", name);
    if(compare(name, name2)){
        printf("The string is palindrome");
        
    }
    else{
        printf("The string is not palindrome");
    }
    return 0;
    
}
