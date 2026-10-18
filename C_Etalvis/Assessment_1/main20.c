#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=((a/10)+(a%10))%2!=0?a-5:a;
    printf("%d",b);
}
// get a number and subtract the 5 from the number if the sum of the digits is odd and print hte result.