#include <stdio.h>

int main()
{
    int n, reverse;

    scanf("%d", &n);

    reverse = (n % 10) * 10 + (n / 10);

    printf("%d", reverse);

    return 0;
}
// get a two digit number and print reverse of the number.