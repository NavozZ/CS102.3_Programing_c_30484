#include<stdio.h>
int main()

{
    int num1,num2;
    printf("Enter Number one");
    scanf("%d",&num1);
    printf("Enter Number two");
    scanf("%d",&num2);

    if (num1%num2==0)
    {
        printf ("%d is a multiple of %d\n",num1,num2);

    }
    else
    {
        printf("%d is not a multiple of %d\n",num1,num2);
    }

}

