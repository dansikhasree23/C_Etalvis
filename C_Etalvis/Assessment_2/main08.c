#include<stdio.h>
int main ()
{
     int a;
     scanf("%d",&a);
     if((a/10)!=(a%10))
     {
         printf("1");
     }
     else 
     {
         printf("0");
     }
}
// get a two digit number and check if digit 1 and digit o are not indentical'
// if yes, print 1 otherwie print 0.