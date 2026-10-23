#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a%10)<(a/10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
//get a two digit number and check if digit 0 is less than digit 1,
//if yes,print 1 otherwise print 0.