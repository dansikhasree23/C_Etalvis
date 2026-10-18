#include<stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=((a/100))+((a/10)%10)+(a%10);
    c=(b<10)?b:(b/10)+(b%10);
    d=(c<10)?c:(c/10)+(c%10);
    printf("%d",d);
}
// get a three digit number and find the sum of digits if less than 10, print the sum,
// otherwise add the digits of the sum.the result should always be a single digit.