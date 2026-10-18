#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=((a/100)*100)+((a/10)%10)-((a/10)%10)+(a%10);
    printf("%d",b);
}
// get a three digit number and make the ten's digit 0 and print the result.