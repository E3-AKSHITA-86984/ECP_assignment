#include<stdio.h>
   void pascal(int n){
   int i,j,k;
   for(i=1;i<=n;i++){
   for(j=0;j=n-i;j++){
   printf(" ");
   }
   int c=1;
   for(j=1;j<=n;j++){
  printf("%4d",c);
  c=c*(i-j)/j;
  }
  printf("\n");
  }
  }
  
  
  
  int main(){
  int n;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  pascal(n);
  return 0;
  }

