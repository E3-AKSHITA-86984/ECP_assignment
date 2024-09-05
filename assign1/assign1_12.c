#include<stdio.h>
#include<float.h>

int main()
{
  printf(" Range of float  = %e to %e \n",FLT_MIN,FLT_MAX);
  printf(" Range of double  = %e to %e \n",DBL_MIN,DBL_MAX);
  printf(" RAnge of long double = %Le to %Le \n ",LDBL_MIN,LDBL_MAX);

  return 0 ;

  }
