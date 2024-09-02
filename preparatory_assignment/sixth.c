// Program to find matrix multiplication
        #include <stdio.h>
int main() {
  int matrix1[3][3]={{1,2,3},{3,5,6},{8,5,7}};
  int matrix2[3][3]={{2,6,3},{5,3,6},{7,5,9}};
  int result[3][3]={0};
  int i,j,k;
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          int sum=0;
          for(k=0;k<3;k++){
              sum+=matrix1[i][k]*matrix2[k][j];
          }
          result[i][j]=sum;
      }
  }
  printf("Resultant matrix:\n");
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          printf(" %d", result[i][j]);
      }
  printf("\n");
  }
  return 0;
}
