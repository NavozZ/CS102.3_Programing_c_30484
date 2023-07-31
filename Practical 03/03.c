#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[30];
    float basic_sallery,inc,new_sallery;

    printf ("Enter the employee name");
    scanf("%s",&empname);
    printf("Enter the basic salary");
    scanf("%f",&basic_sallery);

    if (basic_sallery<5000)
        inc=basic_sallery*0.05;
    else if (basic_sallery>10000)
        inc=basic_sallery*0.15;
    else
        inc=basic_sallery*10/100;

        new_sallery=basic_sallery+inc;
        printf("Employee name %s\n",empname);
        printf("New salary %2f\n",new_sallery);

}

