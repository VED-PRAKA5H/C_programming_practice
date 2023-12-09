#include<stdio.h>
void main()
{
  int a,b,addition,subtrction,multiplication,quotient,remainder;
  float division;
  printf("enter two numbers to find thier arithmetic results\n");
  scanf("%d%d",&a,&b);
  addition=a+b;
  subtrction=a-b;
  multiplication=a*b;
  quotient=a/b;
  remainder =a%b;
  division=(float)a/b;

  printf("\nThe addition, %d+%d = %d",a,b,addition);
  printf("\nThe subtraction, %d-%d = %d",a,b,subtrction);
  printf("\nThe multiplication, %d*%d = %d",a,b,multiplication);
  printf("\nThe quotient, %d/%d = %d",a,b,quotient);
  printf("\nThe remainder, %d/%d = %d",a,b,remainder);
  printf("\nThe division, %d/%d = %.3f",a,b,division);
  
}
