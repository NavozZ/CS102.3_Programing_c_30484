#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Type the first number: ");
    scanf("%d", &num1);
    printf("Type the second number: ");
    scanf("%d", &num2);
    printf("Type the third number: ");
    scanf("%d", &num3);

    int largest = num1;
    int smallest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);
}
