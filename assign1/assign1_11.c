#include<stdio.h>
#include<limits.h>

int main()
{
  char ch ;
  unsigned char ch1;
  short int sin ;
  unsigned int usin;
  int in ;
  unsigned int uin ;
  long int lin ;
  unsigned long int ulin;


  printf(" Data Type           Size        Format specifier        Range  \n ");
  printf(" char%16ld                    %%c%12d to %d\n ", sizeof(ch),CHAR_MIN,CHAR_MAX);
  printf(" Unsigned char%8ld                  %%c%12d to %d \n", sizeof(ch1),0,UCHAR_MAX);
  printf(" short int%12ld                    %%hd%12d to %d\n ", sizeof(sin),SHRT_MIN,SHRT_MAX);
  printf(" Unsigned short int%4ld               %%hu%12d to %d \n", sizeof(usin),0,UINT_MAX);  
  printf(" int%19ld                 %%d%18d to %d \n", sizeof(in),INT_MIN,INT_MAX);
  printf(" Unsigned int%10ld                  %%u%12d to %d \n", sizeof(uin),0,UINT_MAX);
  printf(" long int%15ld                 %%ld%12d to %d \n", sizeof(lin),LONG_MIN,LONG_MAX);
  printf(" Unsigned long int%5ld                  %%u%15d to %d \n", sizeof(ulin),0,ULONG_MAX); 
 
 return 0 ;

 }

