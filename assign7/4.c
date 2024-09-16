#include<stdio.h>
void accept_str(char str[5][20]){
	for(int i=0;i<5;i++){
		printf("Enter the name\n");
		scanf("%s",str[i]);
		}
	}
void print_str(char str[5][20]){
		printf("Names of student\n");
	for(int i=0;i<5;i++){
		printf("%s",str[i]);
		}
		printf("\n");
	}

void sort_arr(int str[5][20]){
char str1[20];
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				if(strcmp(arr[i],str[j])>0){
					strcpy(str1,str[i]);
					strcpy(str[i],str[j]);
					strcpy((str[j],str1);
				}
			}
		}
		print_str(str);
	}

int main(){
char str[5][20];
accept_str(str);
print_str(str);
sort_arr(str);
return 0;
}

