#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=(a/100)+((a/10)%10)+(a%10);
    printf("%d",b);
}

//change
// get a three digit number and print the sum of digits.