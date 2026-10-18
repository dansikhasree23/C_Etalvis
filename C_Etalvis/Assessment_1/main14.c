#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);

    b = (a / 1000) * 1000
        + ((a / 100) % 10) * 100
        + (a % 10) * 10
        + (a / 10) % 10;

    printf("%d", b);

    return 0;
}
//get a four digit number and reverse only the last two digits and print  the number.