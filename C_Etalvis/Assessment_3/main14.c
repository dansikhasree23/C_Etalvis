#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(((a/1000)+((a/100)%10))==(((a/10)%10)+(a%10)))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}