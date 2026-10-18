#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=((a/100)*100)+((a/10)%10)*10+(((a%10)/10)+2);
    printf("%d",b);
}

// get a three digit and make the one's digit as 2 and print hte number.
//b=((a/10)*10)+((a/1000)+2).