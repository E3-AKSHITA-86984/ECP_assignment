#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,s,area,x;
printf("Enter the three sides of a triangle");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
 s= a+b+c;
printf("Perimeter=%d", s);
 x=s*(s-a)*(s-b)*(s-c);
area=sqrt(x);
printf("The area of the triangle is:");
printf("Area=%d",area);
return 0;

}
