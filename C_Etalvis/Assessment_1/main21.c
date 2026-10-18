#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=((a/100)%2!=0)&&((a%10)%2!=0)?a-5:a;
    printf("%d",b);
}
//get a three digit number and subtract five from the number
//if the 100's digit and one's digit are odd and print the result.