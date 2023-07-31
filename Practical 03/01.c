#include <stdio.h>
int main()
{
    int num1,num2;

    printf("Type Number one");
    scanf("%d",&num1);
    printf("Type Number two");
    scanf("%d",&num2);

    if(num1>num2)
        printf("Highest Number is %d",num1);
    else
        printf("Highest Number is %d",num2);
}
