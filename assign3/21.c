#include<stdio.h>
int main(){
	int num;
	int count=0;
	int flag=0;
	printf("Enter a number:");
	scanf("%d",&num);
	int i=num+1;
		
          while(flag<5){
          count=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					count=count+1;
					}

				}
				if(count<=2){
				printf("%d ",i);
				flag++;
			
				}
				i++;
			}

		return 0;
	}
		
