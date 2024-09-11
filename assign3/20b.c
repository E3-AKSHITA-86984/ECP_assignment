#include<stdio.h>
int main(){
int temp,rem,sum;
	for(int i=1;i<=100;i++){
		temp=i,sum=0;
		while(temp>0){
			rem=temp%10;		
			sum=sum+(rem*rem*rem);
			temp=temp/10;
			}
		if(sum==i){
			printf(" %d",i);
			}
		}
			return 0;
		}
