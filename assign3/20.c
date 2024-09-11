#include<stdio.h>
int count;
int main(){
for(int i=1;i<=100;i++){
	count=0;
	for(int j=1;j<=i;j++){
	if(i%j==0){
	count++;
		}
	}	
	if(count<=2){
	printf("   %d",i);
	}
}
return 0;
}
