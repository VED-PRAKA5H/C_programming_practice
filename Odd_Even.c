#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number to check whether it is even or odd.\n");
    scanf("%d",&number);

    if (number%2==0)
    {
        printf("%d is an even number",number);
    }

    else
    {
        printf("3%d is an odd number",number);
    }
}
