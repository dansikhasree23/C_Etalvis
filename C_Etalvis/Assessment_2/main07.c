#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if((a/10)==(a%10))
    printf("1");
    else
    printf("0");
}
// get a two digit number and check id digit 1 and digit 0 are identical,
// if yes, print 1 otherwise print 0.