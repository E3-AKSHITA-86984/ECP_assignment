#include<stdio.h>
int main(){
int base,index,res=1;
printf("Enter the base:");
scanf("%d",&base);
printf("\nEnter the index:");
scanf("%d",&index);
	
	if(index==0){
	printf("Input: base:%d  index:%d",base,index);
	printf("\nOutput:1");
    }
	else if(index==1){
	printf("Input: base:%d  index:%d",base,index);
	printf("\nOutput: %d",base);
    }
	else{
		for(int i=1;i<=index;i++){
			res=res*base;
	    	}
	printf("Input: base:%d  index:%d",base,index);
	printf("\n Output: %d",res);
       }
return 0;
}
