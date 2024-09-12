#include<stdio.h>

duplicate(int arr[]){
for(int i=0;i<8;i++){
   for(j=i+1;j<9;j++){
   if(arr[i]==arr[j]){
      for(i=0;
			arr

int main(){
int arr[10]={1,2,3,4,5,6,5,4,3,4};
duplicate(arr);
return 0;
}
