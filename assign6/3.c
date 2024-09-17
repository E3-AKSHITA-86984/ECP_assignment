#include<stdio.h>
#include<string.h>
void duplicate(char *arr,const char ch){
int len=strlen(arr);
for(int i=0;i<len;i++){
   if(arr[i]==ch){
      for(int m=i;m<len;m++){
      	arr[m]=arr[m+1];

      	}
		len--;

		i--;
		
      	}
		
		}
		for(int i=0;i<=len;i++){
		printf(" %c", arr[i]);
		}
		return;
		}

int main(){
char str[50];
char ch;
printf("Enter a string\n");
scanf("%s",str);
printf("Enteer a character\n");
scanf("%*c%c",&ch);

duplicate(str,ch);
return 0;
}
