#include<stdio.h>
int main(){
int row;
printf("Enter a value");
scanf("%d",&row);
	for(int i=0;i<=row;i++){
		int value=1;
			for(int j=0;j<=row-i-1;j++){
			printf(" ");
			}
				for(int j=0;j<=i;j++){
					printf("  %d", value);
					
				value=value*(i-j)/(j+1);
				}
			printf("\n");
			}
		return 0;

		}
