#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=((a/10)%10)%2!=0?a-5:a;
    printf("%d",b);
}
// get a number and subtract 5 from the number if the 10's digit is odd and print the result.