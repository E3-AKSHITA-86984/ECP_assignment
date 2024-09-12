#include<stdio.h>

void duplicate(int arr[]){

int num;
for(int i=0;i<8;i++){
   for(int j=i+1;j<9;j++){
   if(arr[i]==arr[j]){
      for(int m=0;m+j<=9;m++){
      	arr[j]=arr[j+m];
		num=j+m;

      	}
      	arr[num]=0;
      	}
		}
		}
		for(int i=0;i<10;i++){
		printf(" %d", arr[i]);
		}
		return;
		}

int main(){
int arr[10]={1,2,1,2,1,2,1,2,1,2};
duplicate(arr);
return 0;
}
