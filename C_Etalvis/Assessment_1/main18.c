#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%2!=0?a-5:a;
    printf("%d",b);
}

// get a number and subtract 5 if the number is odd and print the result.