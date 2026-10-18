#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=((a/10)/10+1)*10+(a%10);
    printf("%d",b);
}
// get a two digit number and make the one,s digit as 1 and print the number.