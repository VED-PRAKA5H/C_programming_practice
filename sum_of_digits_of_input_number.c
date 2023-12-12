#include<stdio.h>
void main()
{
    int number,remainder,sum=0,NUMBER;
    printf("enter a number to find sum of its digits.\n");
    scanf("%d",&number);
    NUMBER=number;
    while (number>0)
    {
        remainder = number%10;
        sum += remainder;
        number = number/10;
    }

    printf("the sum of digits of %d is %d",NUMBER,sum);
    
}
