#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    b=(((a/100)%10)*1000)+((a/1000)*100)+(((a/10)%10)*10)+(a%10);
    printf("%d",b);
}
// get a four digit number and reverse the 1st two digits of the number and print the result.